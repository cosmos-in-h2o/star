#include "star/ecs/component/camera2d.hpp"
#include "star/tool/class_db.hpp"

namespace star {
mat4 &Camera2D::getViewProjectionMat() {
    auto viewMatrix =
        rotate(mat4(1.0f), radians(-transform->rotation), vec3(0.0, 0.0, 1.0));
    viewMatrix = translate(viewMatrix, {-transform->position, 0.0});
    auto projectionMatrix = ortho(-viewport.x / 2, viewport.x / 2,
                                  -viewport.y / 2, viewport.y / 2, -1.0f, 1.0f);

    _viewingMatrix = projectionMatrix * viewMatrix;
    return _viewingMatrix;
}

ivec4 Camera2D::getViewport(ivec2 size) {
    // 计算窗口的长宽比
    float targetAspect = viewport.x / viewport.y;
    float aspect = static_cast<float>(size.x) / static_cast<float>(size.y);

    int viewportWidth, viewportHeight;
    int xOffset = 0, yOffset = 0;

    if (aspect > targetAspect) {
        // 窗口宽度过大
        viewportHeight = size.y;
        viewportWidth =
            static_cast<int>(static_cast<float>(viewportHeight) * targetAspect);
        xOffset = (size.x - viewportWidth) / 2;
    } else {
        // 窗口高度过大
        viewportWidth = size.x;
        viewportHeight =
            static_cast<int>(static_cast<float>(viewportWidth) / targetAspect);
        yOffset = (size.y - viewportHeight) / 2;
    }
    return {xOffset, yOffset, viewportWidth, viewportHeight};
}

void Camera2D::starBindFunc() {
    STAR_AUTO_CLASS_DB_COMPONENT_PROPERTY(star::Camera2D, star::vec2, viewport)
}
} // namespace star