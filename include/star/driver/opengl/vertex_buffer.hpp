#ifndef STAR_VERTEX_BUFFER_HPP
#define STAR_VERTEX_BUFFER_HPP

#include "star/driver/opengl/gl_common.hpp"

namespace star {
class VertexBuffer {
  public:
    VertexBuffer(const void *data, GLsizeiptr size);
    ~VertexBuffer();

    void bind() const { glBindBuffer(GL_ARRAY_BUFFER, _bufferID); }
    void unbind() const { glBindBuffer(GL_ARRAY_BUFFER, 0); }

  private:
    GLuint _bufferID{};
};

} // namespace star

#endif // STAR_VERTEX_BUFFER_HPP
