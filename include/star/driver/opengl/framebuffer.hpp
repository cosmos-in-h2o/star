#ifndef STAR_FRAMEBUFFER_HPP
#define STAR_FRAMEBUFFER_HPP

#include "star/core/math/linear.hpp"
#include "star/driver/opengl/gl_common.hpp"

namespace star {
class Framebuffer {
  public:
    // 构造函数和析构函数
    Framebuffer(const vec2 &size);
    ~Framebuffer();

    // 绑定和解绑帧缓冲
    void bind() const;
    void unbind() const;

    // 获取帧缓冲纹理
    GLuint getTexture() const;

    // 重设尺寸
    void resize(const vec2 &size);

    vec2 &getSize();

  private:
    void initFramebuffer();

    vec2 _size;
    GLuint _framebuffer;
    GLuint _textureColorbuffer;
    GLuint _rbo;
};
} // namespace star

#endif // STAR_FRAMEBUFFER_HPP
