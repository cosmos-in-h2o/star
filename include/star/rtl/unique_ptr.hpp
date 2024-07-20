#ifndef STAR_UNIQUE_PTR_HPP
#define STAR_UNIQUE_PTR_HPP

#include <memory>

namespace star {
template <typename T> using UniquePtr = std::unique_ptr<T>;

template <class T, class... Ts> constexpr UniquePtr<T> makeUnique(Ts &&...args) {
    return UniquePtr<T>(new T(std::forward<Ts>(args)...));
}
} // namespace star

#endif // STAR_UNIQUE_PTR_HPP
