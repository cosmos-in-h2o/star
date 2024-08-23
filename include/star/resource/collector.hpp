#ifndef STAR_COLLECTOR_HPP
#define STAR_COLLECTOR_HPP

#include "star/core/io/log.hpp"
#include "star/def.hpp"
#include "star/resource/resource_info.hpp"
#include "star/rtl/atomic_array.hpp"

namespace star {
using CollectFunc = FuncPtr<void, void *>;

void collectResource(void *ptr) ;

struct Garbage {
    void *ptr;
    CollectFunc func;
};

class Collector {
  public:
    template <class T>
    static void
    push(T *ptr, CollectFunc func = [](void *ptr) { delete (T *)ptr; });

    static void garbageCollect();
    static void close();

  private:
    static AtomicArray<Garbage, 512> _collectList;
};

template <class T> void Collector::push(T *ptr, CollectFunc func) {
    _collectList.push({ptr, func});
}
} // namespace star

#endif // STAR_COLLECTOR_HPP