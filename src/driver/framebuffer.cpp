#include "star/driver/opengl/framebuffer.hpp"
#include "star/core/io/log.hpp"

namespace star {
Framebuffer::Framebuffer(const vec2 &size)
    : _size(size), _framebuffer(0), _textureColorbuffer(0), _rbo(0) {
    initFramebuffer();
}

Framebuffer::~Framebuffer() {
    // 清理资源
    glDeleteFramebuffers(1, &_framebuffer);
    glDeleteTextures(1, &_textureColorbuffer);
    glDeleteRenderbuffers(1, &_rbo);
}

void Framebuffer::initFramebuffer() {
    // 创建帧缓冲对象
    glGenFramebuffers(1, &_framebuffer);
    glBindFramebuffer(GL_FRAMEBUFFER, _framebuffer);

    // 创建颜色附件纹理
    glGenTextures(1, &_textureColorbuffer);
    glBindTexture(GL_TEXTURE_2D, _textureColorbuffer);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, static_cast<int>(_size.x),
                 static_cast<int>(_size.y), 0, GL_RGB, GL_UNSIGNED_BYTE, NULL);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D,
                           _textureColorbuffer, 0);

    // 创建渲染缓冲对象作为深度和模板附件
    glGenRenderbuffers(1, &_rbo);
    glBindRenderbuffer(GL_RENDERBUFFER, _rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8,
                          static_cast<int>(_size.x), static_cast<int>(_size.y));
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT,
                              GL_RENDERBUFFER, _rbo);

    // 检查帧缓冲完整性
    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        Log::error("ERROR: Framebuffer is not complete!");
    }

    // 解绑帧缓冲
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void Framebuffer::bind() const {
    glBindFramebuffer(GL_FRAMEBUFFER, _framebuffer);
    glViewport(0, 0, static_cast<int>(_size.x),
               static_cast<int>(_size.y)); // 设置视口大小
}

void Framebuffer::unbind() const { glBindFramebuffer(GL_FRAMEBUFFER, 0); }

GLuint Framebuffer::getTexture() const { return _textureColorbuffer; }

void Framebuffer::resize(const vec2 &size) {
    _size = size;

    // 重新生成帧缓冲和其附件
    glDeleteFramebuffers(1, &_framebuffer);
    glDeleteTextures(1, &_textureColorbuffer);
    glDeleteRenderbuffers(1, &_rbo);

    initFramebuffer();
}
vec2 &Framebuffer::getSize() { return _size; }
} // namespace star