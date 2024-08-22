#include "star/ecs/component/camera2d.hpp"

namespace star {
mat4 &Camera2D::getViewProjectionMat() {
    auto viewMatrix = translate(mat4(1.0f), {-transform->position, 0.0});

    viewMatrix =
        rotate(viewMatrix, radians(-transform->rotation), vec3(0.0, 0.0, 1.0));

    auto projectionMatrix = ortho(transform->position.x - viewPort.x / 2,
                                  transform->position.x + viewPort.x / 2,
                                  transform->position.y + viewPort.y / 2,
                                  transform->position.y - viewPort.y / 2);

    _viewingMatrix = projectionMatrix * viewMatrix;
    return _viewingMatrix;
}
} // namespace star