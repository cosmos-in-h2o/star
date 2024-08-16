#include "star/ecs/component/orthographic_camera.hpp"
#include "star/core/math/linear.hpp"

namespace star {
mat4 &OrthographicCamera::getViewProjectionMat() {
    auto projectionMat =
        ortho(transform->position.x-viewPort.x/2, transform->position.x + viewPort.x/2,
              transform->position.y + viewPort.y/2, transform->position.y-viewPort.y/2);
    // 绕三个轴旋转并移动(因为是逆操作所以先移动到原点再旋转)
    auto viewMat = translate(mat4(1.0f), -transform->position);
    viewMat = glm::rotate(viewMat, glm::radians(-transform->rotation.x), glm::vec3(1, 0, 0));
    viewMat = glm::rotate(viewMat, glm::radians(-transform->rotation.y), glm::vec3(0, 1, 0));
    viewMat = glm::rotate(viewMat, glm::radians(-transform->rotation.z), glm::vec3(0, 0, 1));
    // scale不参与计算
    viewingMat = projectionMat * viewMat;
    return viewingMat;
}
} // namespace star