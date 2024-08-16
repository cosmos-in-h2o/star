#ifndef STAR_VERTEX_LAYOUT_HPP
#define STAR_VERTEX_LAYOUT_HPP

#include "star/driver/opengl/gl_common.hpp"
#include <array>

namespace star {
enum class ShaderDataType {
    None = 0,
    Float,
    Float2,
    Float3,
    Float4,
    Mat3,
    Mat4,
    Int,
    Int2,
    Int3,
    Int4,
    Bool
};

uint32_t shaderDataTypeSize(ShaderDataType type);
uint32_t getComponentCount(ShaderDataType type);
GLenum shaderDataTypeToOpenGLBaseType(ShaderDataType type);

struct VertexLayoutElement {
    ShaderDataType type{};
    bool isNormalized = false;
    size_t offset{};
};

template <size_t size> struct VertexLayout {
    std::array<VertexLayoutElement, size> elements;
    uint32_t stride;
    VertexLayout(uint32_t stride,
                 const std::initializer_list<VertexLayoutElement> &elements)
        : stride(stride), elements(elements) {}

    void vertexAttribPointer() {
        uint32_t index = 0;
        for (auto i : elements) {
            glEnableVertexAttribArray(index);
            glVertexAttribPointer(index, getComponentCount(i.type),
                                  shaderDataTypeToOpenGLBaseType(i.type),
                                  i.isNormalized ? GL_TRUE : GL_FALSE, stride,
                                  (const void *)(i.offset));
            index++;
        }
    }
};
} // namespace star

#endif // STAR_VERTEX_LAYOUT_HPP
