#include "star/driver/opengl/vertex_layout.hpp"

namespace star {
uint32_t shaderDataTypeSize(ShaderDataType type) {
    switch (type) {
    case ShaderDataType::Float:
        return 4;
    case ShaderDataType::Float2:
        return 4 * 2;
    case ShaderDataType::Float3:
        return 4 * 3;
    case ShaderDataType::Float4:
        return 4 * 4;
    case ShaderDataType::Mat3:
        return 4 * 3 * 3;
    case ShaderDataType::Mat4:
        return 4 * 4 * 4;
    case ShaderDataType::Int:
        return 4;
    case ShaderDataType::Int2:
        return 4 * 2;
    case ShaderDataType::Int3:
        return 4 * 3;
    case ShaderDataType::Int4:
        return 4 * 4;
    case ShaderDataType::Bool:
        return 1;
    default:
        return 0;
    }
}

uint32_t getComponentCount(ShaderDataType type) {
    switch (type) {
    case ShaderDataType::Float:
        return 1;
    case ShaderDataType::Float2:
        return 2;
    case ShaderDataType::Float3:
        return 3;
    case ShaderDataType::Float4:
        return 4;
    case ShaderDataType::Mat3:
        return 3 * 3;
    case ShaderDataType::Mat4:
        return 4 * 4;
    case ShaderDataType::Int:
        return 1;
    case ShaderDataType::Int2:
        return 2;
    case ShaderDataType::Int3:
        return 3;
    case ShaderDataType::Int4:
        return 4;
    case ShaderDataType::Bool:
        return 1;
    default:
        return 0;
    }
}

GLenum shaderDataTypeToOpenGLBaseType(ShaderDataType type) {
    switch (type) {
    case star::ShaderDataType::Float:
        return GL_FLOAT;
    case star::ShaderDataType::Float2:
        return GL_FLOAT;
    case star::ShaderDataType::Float3:
        return GL_FLOAT;
    case star::ShaderDataType::Float4:
        return GL_FLOAT;
    case star::ShaderDataType::Mat3:
        return GL_FLOAT;
    case star::ShaderDataType::Mat4:
        return GL_FLOAT;
    case star::ShaderDataType::Int:
        return GL_INT;
    case star::ShaderDataType::Int2:
        return GL_INT;
    case star::ShaderDataType::Int3:
        return GL_INT;
    case star::ShaderDataType::Int4:
        return GL_INT;
    case star::ShaderDataType::Bool:
        return GL_BOOL;
    default:
        return 0;
    }
}
}