#ifndef STAR_RESOURCE_MANAGER_HPP
#define STAR_RESOURCE_MANAGER_HPP

#include "star/core/io/log.hpp"
#include "star/def.hpp"
#include "star/resource/collector.hpp"
#include "star/resource/resource_info.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/list.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
#include <atomic>
#include <mutex>

namespace star {
using RemoveResourceFunc = FuncPtr<void, SafeList<String> &, StringView>;

void defaultRemoveFunc(SafeList<String> &list, StringView name);

template <class T> class Ref {
  public:
    Ref();
    explicit Ref(ResourceInfo &info, StringView name);
    Ref(const Ref<T> &ref);
    Ref(Ref<T> &&ref) noexcept;
    ~Ref();

    T *get() const;
    void unref();

    Ref<T> &operator=(const Ref<T> &ref);
    Ref<T> &operator=(Ref<T> &&ref) noexcept;

    T *operator->() const noexcept;
    T &operator*() const noexcept;
    explicit operator bool() const noexcept;

  private:
    StringView _name{};
    T *_resource = nullptr;
    SafeNumeric<uint64_t> *_refCount = nullptr;
};

class ResourceManager {
    template <class RT> friend class Ref;
    friend class Collector;

  public:
    /**
     * @brief 将普通资源交由管理器管理,资源不存在则添加,存在则覆盖
     * @param name 要加载的资源的名字
     * @param resource
    要加载进的资源的指针，若资源存在且此指针若为空则删除资源,指针不为空则删除原资源，把该指针加载进原资源位置
     * @return 返回加载的资源的Ref<T>
     */
    template <class RT>
    static Ref<RT> loadResource(const String &name, Resource *resource);
    /**
     * @brief 将普通资源交由管理器管理,资源不存在则创建并添加,存在则不做处理
     * @param name 要加载的资源的名字
     * @param args
    要加载进的资源的构造函数参数,但实际是否会构造指定对象由函数内部确定
     * @return 返回需要的资源的Ref<T>
     * @see Ref<T>
     */
    template <class RT>
    static Ref<RT> emplaceLoadResource(const String &name, auto &&...args);
    /**
     * @brief 将静态资源交由管理器，若重名则返回原有资源.
     * @attention 第二个参数直接传入new
     * ResourceT()有可能造成内存泄露,因为如果重名不会对传入的指针做任何操作,整个加载语句就等价于getStaticResource(name)+new
     * ResourceT(),可以使用emplaceLoadStaticResource()函数,或者在加载前先进行判断,再施行合理对策.
     * @param name 要加载的资源的名字
     * @param resource 要加载进的资源的指针
     * @return 返回需要的资源指针
     */
    template <class RT>
    static RT *loadStaticResource(const String &name, Resource *resource);
    /**
     * @brief 将静态资源交由管理器，若重名则返回原有资源
     * @param name 要加载的资源的名字
     * @param args
     * 要加载进的资源的构造函数参数,但实际是否会构造指定对象由函数内部确定
     * @return 返回需要的资源指针
     */
    template <class RT>
    static RT *emplaceLoadStaticResource(const String &name, auto &&...args);

    /**
     * @brief 获取普通资源
     * @param name 要获取的资源的名字
     * @return 返回获取的资源的Ref<T>
     * @see Ref<T>
     */
    template <class RT> static Ref<RT> getResource(const String &name);
    /**
     * @brief 获取静态资源
     * @param name 要获取的资源的名字
     * @return 返回获取的资源指针
     */
    template <class RT> static RT *getStaticResource(const String &name);

    /**
     * @brief 是否拥有某普通资源
     * @param name 资源的名字
     * @return 有为true,无为false
     */
    static bool hasResource(const String &name);
    /**
     * @brief 是否拥有某静态资源
     * @param name 资源的名字
     * @return 有为true,无为false
     */
    static bool hasStaticResource(const String &name);

    /**
     * @brief 移除某普通资源
     * @param name 资源的名字
     */
    static void removeResource(const String &name);
    /**
     * @brief 移除某静态资源
     * @details 立即从ResourceManager中移除某静态资源,并将资源指针交给外部回收器
     * @warning
     * 静态资源理应在游戏结束时自动被回收,并且由于静态资源都是通过普通的指针获取的,很有可能造成悬垂指针,因此若无特殊需求不建议使用.
     * @prama name 资源名称
     */
    static void removeStaticResource(const String &name);

    /**
     * @brief 初始化资源管理器
     */
    static void init();
    /**
     * @brief 关闭资源管理器
     */
    static void close();

    static RemoveResourceFunc removeResourceFunc;

  private:
    /*
     * 实行GC,回收所有存在于_resourceData且被标记为可回收的资源
     * 此函数由外部回收器调用,游戏中不需要显示调用此函数
     */
    static void garbageCollect();
    static bool isCollect(ResourceInfo &info);

    static SafeHashMap<String, ResourceInfo> _resourceData;
    static SafeHashMap<String, Resource *> _staticResourceData;

    static SafeList<String> _collectList;
};

template <class T> Ref<T>::Ref() = default;

template <class T>
Ref<T>::Ref(ResourceInfo &info, StringView name)
    : _resource(static_cast<T *>(info.resource)), _refCount(&(info.refCount)),
      _name(name) {}

template <class T> Ref<T>::Ref(const Ref<T> &ref) {
    this->_resource = ref._resource;
    this->_refCount = ref._refCount;
    this->_name = ref._name;
    if (_refCount) {
        _refCount->increment();
    }
}

template <class T> Ref<T>::Ref(Ref<T> &&ref) noexcept {
    this->_resource = ref._resource;
    this->_refCount = ref._refCount;
    this->_name = ref._name;

    ref._resource = nullptr;
    ref._refCount = nullptr;
}

template <class T> Ref<T>::~Ref() {
    if (_resource && ResourceManager::removeResourceFunc && !_name.empty() &&
        _refCount->decrement() == 0) {
        ResourceManager::removeResourceFunc(ResourceManager::_collectList,
                                            _name);
    }
    _resource = nullptr;
    _refCount = nullptr;
    _name = StringView{};
}

template <class T> T *Ref<T>::get() const {
    return static_cast<T *>(_resource);
}

template <class T> void Ref<T>::unref() {
    if (_resource && ResourceManager::removeResourceFunc && !_name.empty() &&
        _refCount->decrement() == 0) {
        ResourceManager::removeResourceFunc(ResourceManager::_collectList,
                                            _name);
    }
    _resource = nullptr;
    _refCount = nullptr;
    _name = StringView{};
}

template <class T> Ref<T> &Ref<T>::operator=(const Ref<T> &ref) {
    if (this == &ref) {
        return *this;
    }
    if (_refCount) {
        _refCount->decrement();
    }
    this->_resource = ref._resource;
    this->_name = ref._name;
    this->_refCount = ref._refCount;
    if (_refCount) {
        _refCount->increment();
    }
    return *this;
}

template <class T> Ref<T> &Ref<T>::operator=(Ref<T> &&ref) noexcept {

    if (this == &ref) {
        return *this;
    }
    if (this->_info) {
        this->_info->operator--();
    }
    this->_resource = ref._resource;
    this->_name = std::move(ref._name);
    this->_refCount = ref._refCount;

    ref._info = nullptr;
    ref._refCount = nullptr;
    return *this;
}

template <class T> T *Ref<T>::operator->() const noexcept { return get(); }

template <class T> T &Ref<T>::operator*() const noexcept { return *get(); }

template <class T> Ref<T>::operator bool() const noexcept {
    return get() != nullptr;
}

template <class RT>
Ref<RT> ResourceManager::loadResource(const String &name, Resource *resource) {
    auto it = _resourceData.find(name);
    // 没找到就添加
    if (it == _resourceData.end()) {
        if (resource == nullptr) {
            Log::warn("In {}: resource is a nullptr.", __FUNCTION__);
            ResourceInfo info{};
            return Ref<RT>(info, StringView{});
        }
        ResourceInfo info(resource);
        info.refCount.increment();
        _resourceData[name] = info;
        auto pair = _resourceData.find(name);
        return Ref<RT>(pair->second, pair->first);
    }
    // 找到了
    // 先判断是否是需要把原有资源删除的情形
    // 当要加载的资源就是现在所持有的资源时
    if (resource == it->second.resource) {
        it->second.refCount.increment();
        return Ref<RT>(it->second, it->first);
    }
    // 若传入空指针则代表需要删除这个资源
    else if (resource == nullptr) {
        Log::warn("In {}: resource is a nullptr.", __FUNCTION__);
        removeResourceFunc(_collectList, name);
        return Ref<RT>();
    }
    // 需要删除资源
    // 此时不能使用内部的回收器,因为资源已经不存在于内部了,应该把指针提交给外部回收器帮助正常回收
    Collector::push(it->second.resource, collectResource);
    it->second.resource = resource;
    // 被作为一个新资源加载所以要增加1,防止之前的资源的引用计数还未清除
    it->second.refCount.increment();

    return Ref<RT>(it->second, it->first);
}

template <class RT>
Ref<RT> ResourceManager::emplaceLoadResource(const String &name,
                                             auto &&...args) {
    if (hasResource(name)) {
        return getResource<RT>(name);
    }
    Resource *res = new RT(std::forward<decltype(args)>(args)...);
    return loadResource<RT>(name, res);
}

template <class RT>
RT *ResourceManager::loadStaticResource(const String &name,
                                        Resource *resource) {
    auto it = _staticResourceData.find(name);
    // 没找到就添加
    if (it == _staticResourceData.end()) {
        _staticResourceData[name] = resource;
        return static_cast<RT *>(resource);
    }
    // 找到了
    // 当要加载的资源就是现在所持有的资源时
    if (resource == it->second) {
        return static_cast<RT *>(resource);
    }
    // 发生重名,先警告再返回原有资源
    Log::warn("Static Resource: {} already exists.", name);
    return static_cast<RT *>(it->second);
}

template <class RT>
RT *ResourceManager::emplaceLoadStaticResource(const String &name,
                                               auto &&...args) {
    if (hasStaticResource(name)) {
        return getStaticResource<RT>(name);
    }
    Resource *res = new RT(std::forward<decltype(args)>(args)...);
    return loadStaticResource<RT>(name, res);
}

template <class RT> Ref<RT> ResourceManager::getResource(const String &name) {
    auto it = _resourceData.find(name);
    if (it != _resourceData.end()) {
        it->second.refCount.increment();
        return Ref<RT>(it->second, name);
    }
    return Ref<RT>();
}

template <class RT> RT *ResourceManager::getStaticResource(const String &name) {
    auto it = _staticResourceData.find(name);
    if (it != _staticResourceData.end()) {
        return static_cast<RT *>(it->second);
    }
    return nullptr;
}

// 保证manager正常关闭，防止内存泄露
struct ResourceManagerGuard {
    ResourceManagerGuard();
    ~ResourceManagerGuard();

  private:
    nullptr_t ptr{}; // 占位，保证内存对齐
};
} // namespace star

#define STAR_RESOURCE_MANAGER_GUARD                                            \
    ::star::ResourceManagerGuard __star_guard__{};

#endif // STAR_RESOURCE_MANAGER_HPP
