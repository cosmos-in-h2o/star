#ifndef STAR_COLLECTOR_HPP
#define STAR_COLLECTOR_HPP

#include "star/core/io/log.hpp"
#include "star/resource/resource_info.hpp"

namespace star {
using CollectFunc = void (*)(void *ptr);

struct Garbage {
    void *ptr;
    CollectFunc func;
};

class Collector {
  public:
    template <class T>
    static void
    push(T *ptr, CollectFunc func = [](void *ptr) { delete (T *)ptr; }) {
        auto index = _pos.postincrement();
        if (index < _collectList.size()) {
            _collectList[index] = {(void *)ptr, func};
        } else {
            Log::warn(
                "Collector is full, but you're still trying add garbage.");
        }
    }

    static void garbageCollect();
    static void close();

  private:
    static std::array<Garbage, 512> _collectList;
    static SafeNumeric<size_t> _pos;
};
} // namespace star

#endif // STAR_COLLECTOR_HPP