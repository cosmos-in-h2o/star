#ifndef STAR_RENDERABLE_HPP
#define STAR_RENDERABLE_HPP

#include "star/core/math/linear.hpp"

namespace star {
class Renderable {
  public:
    virtual void draw(const mat4 &viewProjectionMat) = 0;
};
} // namespace star

#endif // STAR_RENDERABLE_HPP
