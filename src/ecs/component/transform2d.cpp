#include "star/ecs/component/transform2d.hpp"

namespace star {
mat4 &Transform2D::getModelMatrix() {

    auto transform = star::translate(mat4(1), vec3{position, 0});
    transform = rotate(transform, radians(rotation), vec3(0, 0, 1));
    transform = star::scale(transform, vec3(scale, 1));
    _modelMatrix = transform;
    return _modelMatrix;
}
} // namespace star