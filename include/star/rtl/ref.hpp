#ifndef STAR_REF_HPP
#define STAR_REF_HPP

#include <atomic>
#include <memory>

namespace star {
template <typename T> using Ref = std::atomic<std::shared_ptr<T>>;
} // namespace star

#endif // STAR_REF_HPP
