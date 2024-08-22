#ifndef STAR_INDEX_BUFFER_HPP
#define STAR_INDEX_BUFFER_HPP

#include "star/driver/opengl/gl_common.hpp"

namespace star {
class IndexBuffer {
  public:
    IndexBuffer(const void *indices, GLsizeiptr size);
    ~IndexBuffer();

    void bind() const { glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _bufferID); }
    void unbind() const { glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); }

  private:
    GLuint _bufferID{};
};
} // namespace star

#endif // STAR_INDEX_BUFFER_HPP
