#ifndef STAR_SAFE_QUEUE_HPP
#define STAR_SAFE_QUEUE_HPP

#include <atomic_queue/atomic_queue.h>

namespace star{
template<class T,size_t size>
using AtomicQueue=atomic_queue::AtomicQueue<T,size>;
}

#endif // STAR_SAFE_QUEUE_HPP
