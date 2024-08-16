#ifndef STAR_TRANSFORM2D_HPP
#define STAR_TRANSFORM2D_HPP

#include <star/core/math/linear.hpp>
#include <star/ecs/component/component.hpp>

namespace star {
struct Transform2D : public Component {
    vec2 position{0.0f,0.0f};
    vec2 scale{0.0,0.0};
    float32 rotation=0.0f;
    float32 skew=0.0f;
};
} // namespace star

#endif // STAR_TRANSFORM2D_HPP