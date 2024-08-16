#ifndef STAR_VERTEX_ARRAY_HPP
#define STAR_VERTEX_ARRAY_HPP

#include "star/driver/opengl/gl_common.hpp"
#include "star/driver/opengl/index_buffer.hpp"
#include "star/driver/opengl/vertex_buffer.hpp"

namespace star {
class VertexArray {
  public:
    VertexArray();
    ~VertexArray();

    void bind() const { glBindVertexArray(_arrayID); }
    void unbind() const { glBindVertexArray(0); }

    // 添加顶点缓冲到VAO，并配置顶点属性指针
    void addVertexBuffer(const VertexBuffer &vb, GLuint index, GLint size,
                         GLenum type, GLboolean normalized, GLsizei stride,
                         const void *offset) const;

    // 绑定索引缓冲
    void setIndexBuffer(const IndexBuffer &ib) const;

  private:
    GLuint _arrayID{};
};
} // namespace star

#endif // STAR_VERTEX_ARRAY_HPP
