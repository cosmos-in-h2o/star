#include "star/driver/opengl/vertex_array.hpp"

namespace star{
VertexArray::VertexArray() { glGenVertexArrays(1, &_arrayID); }

VertexArray::~VertexArray() { glDeleteVertexArrays(1, &_arrayID); }

void VertexArray::addVertexBuffer(const VertexBuffer &vb, GLuint index, GLint size,
                     GLenum type, GLboolean normalized, GLsizei stride,
                     const void *offset) const {
    bind();
    vb.bind();
    glVertexAttribPointer(index, size, type, normalized, stride, offset);
    glEnableVertexAttribArray(index);
}

void VertexArray::setIndexBuffer(const IndexBuffer &ib) const {
    bind();
    ib.Bind();
}
}