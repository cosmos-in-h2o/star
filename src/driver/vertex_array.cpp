#include "star/driver/opengl/vertex_array.hpp"

namespace star {
VertexArray::VertexArray() { glGenVertexArrays(1, &_arrayID); }

VertexArray::~VertexArray() { glDeleteVertexArrays(1, &_arrayID); }

void VertexArray::addVertexBuffer(const VertexBuffer &vb,
                                  VertexLayout layout) const {
    bind();
    vb.bind();
    vertexAttribBind(layout);
}

void VertexArray::setIndexBuffer(const IndexBuffer &ib) const {
    bind();
    ib.bind();
}
} // namespace star