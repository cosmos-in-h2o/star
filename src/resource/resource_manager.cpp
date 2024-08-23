#include "star/resource/resource_manager.hpp"

namespace star {
void defaultRemoveFunc(SafeList<String> &list,
                       StringView name) {
    list.emplace_back(name);
}

SafeHashMap<String, ResourceInfo> ResourceManager::_resourceData;
SafeHashMap<String, Resource *> ResourceManager::_staticResourceData;
SafeList<String> ResourceManager::_collectList;
RemoveResourceFunc ResourceManager::removeResourceFunc;

void ResourceManager::removeResource(const String &name) {
    auto it = _resourceData.find(name);
    // 找到才删除
    if (it != _resourceData.end()) {
        removeResourceFunc(_collectList, name);
    }
}

void ResourceManager::init() {
    _collectList.reserve(128);
    removeResourceFunc = defaultRemoveFunc;
}

void ResourceManager::close() {
    for (auto &i : _staticResourceData) {
        delete i.second;
        i.second = nullptr;
    }

    for (auto &i : _resourceData) {
        delete i.second.resource;
        i.second.resource = nullptr;
    }
}

void ResourceManager::garbageCollect() {
    for (const auto &i : _collectList) {
        auto it = _resourceData.find(i);
        if (it != _resourceData.end() && isCollect(it->second)) {
            delete it->second.resource;
            it->second.resource = nullptr;
            _resourceData.unsafe_erase(it);
        }
    }
}

void ResourceManager::removeStaticResource(const String &name) {
    auto it = _staticResourceData.find(name);
    if (it != _staticResourceData.end()) {
        Collector::push(it->second, collectResource);
        _staticResourceData.unsafe_erase(it);
    }
}

bool ResourceManager::hasResource(const String &name) {
    auto it = _resourceData.find(name);
    return it != _resourceData.end();
}

bool ResourceManager::hasStaticResource(const String &name) {
    auto it = _staticResourceData.find(name);
    return it != _staticResourceData.end();
}

bool ResourceManager::isCollect(ResourceInfo &info) {
    return info.resource && info.refCount.get() == 0;
}

ResourceManagerGuard::ResourceManagerGuard() { ResourceManager::init(); }

ResourceManagerGuard::~ResourceManagerGuard() { ResourceManager::close(); }
} // namespace star