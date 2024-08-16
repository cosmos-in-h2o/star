#ifndef STAR_TRANSFORM3D_HPP
#define STAR_TRANSFORM3D_HPP

#include "star/ecs/component/component.hpp"
#include "star/core/math/linear.hpp"

namespace star {
struct Transform3D:Component{
    vec3 position{};
    vec3 rotation{};
    vec3 scale{};
};
}

#endif // STAR_TRANSFORM3D_HPP
