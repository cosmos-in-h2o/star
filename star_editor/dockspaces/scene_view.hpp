#ifndef STAR_SCENE_VIEW_HPP
#define STAR_SCENE_VIEW_HPP

#include "star/driver/opengl/framebuffer.hpp"
#include "star/tool/imgui/imgui.hpp"

struct SceneView {
    star::Framebuffer *framebuffer{};
    star::vec2*framebufferSize{};
    star::Camera *camera{};
    star::ivec4 *viewport{};
    void draw() const;
};

#endif // STAR_SCENE_VIEW_HPP