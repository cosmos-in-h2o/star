#ifndef STAR_TRANSFORM2D_HPP
#define STAR_TRANSFORM2D_HPP

#include "star/core/ecs/scene.hpp"
#include "star/tool/class_db.hpp"
#include "yaml-cpp/node/node.h"
#include <star/core/math/linear.hpp>
#include <star/ecs/component/component.hpp>

namespace star {
struct Transform2D : public Component {
    vec2 position{0.0f, 0.0f};
    vec2 scale{1.0, 1.0};
    float rotation = 0.0f;
    mat4 &getModelMatrix();
    static void starBindFunc();

  private:
    mat4 _modelMatrix;
};
} // namespace star

#endif // STAR_TRANSFORM2D_HPP