#ifndef STAR_SPRITE_HPP
#define STAR_SPRITE_HPP

#include "star/core/math/linear.hpp"
#include "star/driver/opengl/vertex_array.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/component.hpp"
#include "star/ecs/component/transform2d.hpp"
#include "star/function/render/color.hpp"
#include "star/function/render/gl_texture2d.hpp"
#include "star/function/render/renderable.hpp"
#include "star/function/render/shader.hpp"
#include "star/resource/ref.hpp"

namespace star {
struct Sprite : public Component, public Renderable {
    friend class SpriteSystem;
    Transform2D *transform{};

    GLTexture2D *texture{};
    Shader *shader{};
    Color color = Color{1, 1, 1, 1};

    vec4 uv = vec4{0, 0, 1, 1};
    vec2 size = {100, 100};

    uint32_t order = 0xff;
    Sprite();
    Sprite(Transform2D *transform, GLTexture2D *texture, Shader *shader);
    ~Sprite() override;

    void draw(const mat4 &viewProjectionMat) override;
    void bindVertex();

  private:
    GLuint _vao{0};
    GLuint _vbo{0};
    GLuint _ebo{0};
};
} // namespace star

#endif // STAR_SPRITE_HPP