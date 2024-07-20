#ifndef STAR_WEAK_PTR_HPP
#define STAR_WEAK_PTR_HPP

#include <atomic>
#include <memory>

namespace star {
template <typename T> using WeakPtr = std::atomic<std::weak_ptr<T>>;
} // namespace star

#endif // STAR_WEAK_PTR_HPP
