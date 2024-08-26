#ifndef STAR_CAMERA2D_HPP
#define STAR_CAMERA2D_HPP

#include "star/core/game.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/transform2d.hpp"

namespace star {
struct Camera2D : public Camera, public Component {
    Transform2D *transform;
    vec2 viewport{1920, 1080};
    mat4 &getViewProjectionMat() override;
    ivec4 getViewport(ivec2 size) override;
    static void starBindFunc();

  private:
    mat4 _viewingMatrix;
};
} // namespace star

#endif // STAR_CAMERA2D_HPP
