#ifndef STAR_VERTEX_LAYOUT_HPP
#define STAR_VERTEX_LAYOUT_HPP

#include "star/driver/opengl/gl_common.hpp"
#include <array>

namespace star {
enum class VertexLayout {
    P3fC4fT2f,
    P3fT2f,
    P3fC4f,
    P3f,

    P2fC4fT2f,
    P2fT2f,
    P2fC4f,
    P2f,

    P3iC4fT2f,
    P3iT2f,
    P3iC4f,
    P3i,

    P2iC4fT2f,
    P2iT2f,
    P2iC4f,
    P2i,

    P3dC4fT2f,
    P3dT2f,
    P3dC4f,
    P3d,

    P2dC4fT2f,
    P2dT2f,
    P2dC4f,
    P2d,
};

void vertexAttribBind(VertexLayout layout);
} // namespace star

#endif // STAR_VERTEX_LAYOUT_HPP
