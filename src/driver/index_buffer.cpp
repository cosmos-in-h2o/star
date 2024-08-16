#include "star/driver/opengl/index_buffer.hpp"

namespace star {
IndexBuffer::IndexBuffer(const void *indices, GLsizeiptr size) {
    glGenBuffers(1, &_bufferID);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _bufferID);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW);
}

IndexBuffer::~IndexBuffer() { glDeleteBuffers(1, &_bufferID); }
} // namespace star