#include "star/resource/collector.hpp"

namespace star {
std::array<Garbage, 512> Collector::_collectList{};
SafeNumeric<size_t> Collector::_pos{0};

void Collector::garbageCollect() {
    for (int i = 0; i < _pos.get(); i++) {
        _collectList[i].func(_collectList[i].ptr);
    }
    _pos.set(0);
}

void Collector::close() { garbageCollect(); }
} // namespace star