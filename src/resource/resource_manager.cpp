#include "star/resource/resource_manager.hpp"

namespace star {
void defaultRemoveFunc(List<String> &list,
                       HashMap<String, ResourceInfo> &resources,
                       StringView name) {
    list.emplace_back(name);
}

std::mutex ResourceManager::_mutex;
std::mutex ResourceManager::_mutex2;
HashMap<String, ResourceInfo> ResourceManager::_resourceData;
HashMap<String, Resource *> ResourceManager::_staticResourceData;
List<String> ResourceManager::_collectList;
RemoveResourceFunc ResourceManager::removeResourceFunc;

void ResourceManager::removeResource(const String &name) {
    auto it = _resourceData.find(name);
    // 找到才删除
    if (it != _resourceData.end()) {
        removeResourceFunc(_collectList, _resourceData, name);
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
            _resourceData.erase(it);
        }
    }
}

void ResourceManager::staticCollect(const String &name) {
    std::lock_guard<std::mutex> lockGuard(_mutex2);
    auto it = _staticResourceData.find(name);
    if (it != _staticResourceData.end()) {
        delete it->second;
        it->second = nullptr;
        _staticResourceData.erase(it);
    }
}

bool ResourceManager::isCollect(ResourceInfo &info) {
    return info.resource && info.refCount.get() == 0;
}

ResourceManagerGuard::ResourceManagerGuard() { ResourceManager::init(); }

ResourceManagerGuard::~ResourceManagerGuard() { ResourceManager::close(); }
} // namespace star