#ifndef STAR_CONCEPT_HPP
#define STAR_CONCEPT_HPP

#include <concepts>
#include <star/core/event/event.hpp>

namespace star {
template <typename T>
concept HasStartFunc = requires {
    { T::onStart(std::declval<const Event&>())} -> std::same_as<void>;
};

template <typename T>
concept HasUpdateFunc = requires {
    { T::onUpdate(std::declval<const Event&>())} -> std::same_as<void>;
};

template <typename T>
concept HasDestroyFunc = requires {
    { T::onDestroy(std::declval<const Event&>())} -> std::same_as<void>;
};
} // namespace star

#endif // STAR_CONCEPT_HPP
