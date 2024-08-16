#include "star/resource/resource_info.hpp"

namespace star {
ResourceInfo::ResourceInfo() = default;

ResourceInfo::ResourceInfo(Resource *resource) : resource(resource) {}

ResourceInfo::ResourceInfo(const ResourceInfo &info) {
    this->resource = info.resource;
    this->refCount.set(info.refCount.get());
}

ResourceInfo &ResourceInfo::operator=(const ResourceInfo &info) {
    if (this == &info) {
        return *this;
    }
    this->resource = info.resource;
    this->refCount.set(info.refCount.get());
    return *this;
}

uint64_t ResourceInfo::operator++() { return this->refCount.increment(); }

uint64_t ResourceInfo::operator--() { return this->refCount.decrement(); }
} // namespace star