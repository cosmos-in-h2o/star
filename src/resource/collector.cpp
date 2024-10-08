#include "star/resource/collector.hpp"
#include "star/resource/resource_manager.hpp"

namespace star {
void collectResource(void *ptr) { delete (Resource *)ptr; }

AtomicArray<Garbage, 512> Collector::_collectList{};

void Collector::garbageCollect() {
    for (int i = 0; i < _collectList.get_pos(); i++) {
        _collectList[i].func(_collectList[i].ptr);
    }
    _collectList.clear();
    ResourceManager::garbageCollect();
}

void Collector::close() { garbageCollect(); }
} // namespace star