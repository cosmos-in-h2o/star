#ifndef STAR_CAMERA_HPP
#define STAR_CAMERA_HPP

#include "star/core/math/linear.hpp"

namespace star {
struct Camera {
  public:
    virtual mat4& getViewProjectionMat()=0;
};
}

#endif // STAR_CAMERA_HPP
