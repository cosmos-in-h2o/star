#ifndef STAR_SPRITE_HPP
#define STAR_SPRITE_HPP

#include "star/core/math/linear.hpp"
#include "star/driver/opengl/vertex_array.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/component.hpp"
#include "star/ecs/component/transform2d.hpp"
#include "star/function/render/color.hpp"
#include "star/function/render/gl_texture2d.hpp"
#include "star/function/render/material2d.hpp"
#include "star/function/render/renderable.hpp"
#include "star/function/render/shader.hpp"
#include "star/resource/ref.hpp"

namespace star {
struct Sprite : public Component, public Renderable {
    friend class SpriteSystem;
    Sprite();
    Sprite(Transform2D *transform, const Ref<Material2D> &material);
    ~Sprite() override;

    Transform2D *transform{};
    Ref<Material2D> material;

    vec2 size = {100, 100};
    Color color = Color{1, 1, 1, 1};
    vec4 uv = vec4{0, 0, 1, 1};
    uint32_t order = 0xff;

    void draw(const mat4 &viewProjectionMat) override;
    void bindVertex();

    static void starBindFunc();

  private:
    GLuint _vao{0};
    GLuint _vbo{0};
    GLuint _ebo{0};
};
} // namespace star

#endif // STAR_SPRITE_HPP