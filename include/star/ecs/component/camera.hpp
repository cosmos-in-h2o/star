#ifndef STAR_CAMERA_HPP
#define STAR_CAMERA_HPP

#include "star/core/math/linear.hpp"

namespace star {
class Window;
struct Camera {
  public:
    virtual mat4 &getViewProjectionMat() = 0;
    virtual ivec4 getViewport(ivec2 size) = 0;
};
} // namespace star

#endif // STAR_CAMERA_HPP
