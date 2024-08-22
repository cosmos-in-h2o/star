#ifndef STAR_RESOURCE_MANAGER_HPP
#define STAR_RESOURCE_MANAGER_HPP

#include "star/core/io/log.hpp"
#include "star/resource/resource_info.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/list.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
#include <atomic>
#include <mutex>

namespace star {
typedef void (*RemoveResourceFunc)(List<String> &list,
                                   HashMap<String, ResourceInfo> &resources,
                                   StringView name);

void defaultRemoveFunc(List<String> &list,
                       HashMap<String, ResourceInfo> &resources,
                       StringView name);

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

  public:
    // 将资源交由管理器管理，若重名则覆盖原来的资源
    template <class RT>
    static Ref<RT> loadResource(const String &name, Resource *resource);
    template <class RT>
    static Ref<RT> emplaceLoadResource(const String &name, auto &&...args);
    // 将静态资源交由管理器，若重名则报错
    template <class RT>
    static RT *loadStaticResource(const String &name, Resource *resource);
    template <class RT>
    static RT *emplaceLoadStaticResource(const String &name, auto &&...args);

    // 将资源交由管理器管理，若重名则直接获取原来的资源
    template <class RT>
    static Ref<RT> loadResourceWithoutUpdate(const String &name,
                                             Resource *resource);
    template <class RT>
    static Ref<RT> emplaceLoadResourceWithoutUpdate(const String &name,
                                                    auto &&...args);

    template <class RT> static Ref<RT> getResource(const String &name);
    template <class RT> static RT *getStaticResource(const String &name);

    static void removeResource(const String &name);

    static void init();
    static void close();

    static void garbageCollect();
    static void staticCollect(const String &name);

    static RemoveResourceFunc removeResourceFunc;

  private:
    static bool isCollect(ResourceInfo &info);

    static HashMap<String, ResourceInfo> _resourceData;
    static HashMap<String, Resource *> _staticResourceData;

    static List<String> _collectList;

    static std::mutex _mutex;
    static std::mutex _mutex2;
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
                                            ResourceManager::_resourceData,
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
                                            ResourceManager::_resourceData,
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
    this->_refCount = ref._refCount;
    this->name = ref.name;
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
    std::unique_lock<std::mutex> uniqueLock(_mutex);
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
    // 找到了更新
    // 当要加载的资源就是现在所持有的资源时
    if (resource == it->second.resource) {
        it->second.refCount.increment();
        return Ref<RT>(it->second, it->first);
    }
    // 若传入空指针则代表需要删除这个资源
    else if (resource == nullptr) {
        Log::warn("In {}: resource is a nullptr.", __FUNCTION__);
        removeResourceFunc(_collectList, _resourceData, name);
        return Ref<RT>();
    }
    // 压入一个回收内容
    removeResourceFunc(_collectList, _resourceData, it->first);
    it->second.resource = resource;
    it->second.refCount.increment();

    return Ref<RT>(it->second, it->first);
}

template <class RT>
Ref<RT> ResourceManager::emplaceLoadResource(const String &name,
                                             auto &&...args) {
    Resource *res = new RT(std::forward<decltype(args)>(args)...);
    return loadResource<RT>(name, res);
}

template <class RT>
RT *ResourceManager::loadStaticResource(const String &name,
                                        Resource *resource) {
    std::unique_lock<std::mutex> uniqueLock(_mutex2);
    auto it = _staticResourceData.find(name);
    // 没找到就添加
    if (it == _staticResourceData.end()) {
        _staticResourceData[name] = resource;
        return static_cast<RT *>(resource);
    }
    // 找到了更新
    // 当要加载的资源就是现在所持有的资源时
    if (resource == it->second) {
        return static_cast<RT *>(resource);
    } else {
        Log::error("Static Resource: {} already exists.", name);
    }
    return nullptr;
}

template <class RT>
RT *ResourceManager::emplaceLoadStaticResource(const String &name,
                                               auto &&...args) {
    Resource *res = new RT(std::forward<decltype(args)>(args)...);
    return loadStaticResource<RT>(name, res);
}

template <class RT>
Ref<RT> ResourceManager::loadResourceWithoutUpdate(const String &name,
                                                   Resource *resource) {
    std::unique_lock<std::mutex> uniqueLock(_mutex);
    auto it = _resourceData.find(name);
    // 没找到就添加
    if (it == _resourceData.end()) {
        if (resource == nullptr) {
            Log::warn("In {}: resource is a nullptr.", __FUNCTION__);
            return Ref<RT>(ResourceInfo{}, StringView{});
        }
        ResourceInfo info(resource);
        info.refCount.increment();
        _resourceData[name] = info;
        auto pair = _resourceData.find(name);
        return Ref<RT>(pair->second, pair->first);
    }
    // 找到了就直接获取
    // 若传入空指针则代表需要删除这个资源
    if (resource == nullptr) {
        Log::warn("In {}: resource is a nullptr.", __FUNCTION__);
        removeResourceFunc(_collectList, _resourceData, name);
        return Ref<RT>();
    }
    it->second.refCount.increment();
    return Ref<RT>(it->second, it->first);
}

template <class RT>
Ref<RT> ResourceManager::emplaceLoadResourceWithoutUpdate(const String &name,
                                                          auto &&...args) {

    Resource *res = new RT(std::forward<decltype(args)>(args)...);
    return loadResourceWithoutUpdate<RT>(name, res);
}

template <class RT> Ref<RT> ResourceManager::getResource(const String &name) {
    auto it = _resourceData.find(name);
    if (it != _resourceData.end()) {
        it->second.refCount.increment();
        return Ref<RT>(&(it->second), name);
    }
    return Ref<RT>();
}

template <class RT> RT *ResourceManager::getStaticResource(const String &name) {
    auto it = _staticResourceData.find(name);
    if (it != _staticResourceData.end()) {
        return it->second;
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
