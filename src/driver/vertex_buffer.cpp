#include "star/driver/opengl/vertex_buffer.hpp"

namespace star {
VertexBuffer::VertexBuffer(const void *data, GLsizeiptr size) {
    if(data) {
        glGenBuffers(1, &_bufferID);
        glBindBuffer(GL_ARRAY_BUFFER, _bufferID);
        glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
    }
}

VertexBuffer::~VertexBuffer() { glDeleteBuffers(1, &_bufferID); }
} // namespace star