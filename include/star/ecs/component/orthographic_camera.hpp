#ifndef STAR_ORTHOGRAPHIC_CAMERA_HPP
#define STAR_ORTHOGRAPHIC_CAMERA_HPP

#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/component.hpp"
#include "star/ecs/component/transform3d.hpp"

namespace star {
struct OrthographicCamera : Camera, Component {
    Transform3D *transform{nullptr};
    vec2 viewPort{1920.0f,1080.0f};
    mat4 viewingMat;
    mat4 & getViewProjectionMat() override;
};
} // namespace star

#endif // STAR_ORTHOGRAPHIC_CAMERA_HPP