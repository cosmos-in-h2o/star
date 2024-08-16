#ifndef STAR_OPENGL_CONTEXT_HPP
#define STAR_OPENGL_CONTEXT_HPP

#include "star/driver/opengl/gl_common.hpp"
//order
#include "star/core/window.hpp"

namespace star {
class OpenGLContext {
  public:
    explicit OpenGLContext(Window *window);
    ~OpenGLContext();

    void swapBuffer();

  private:
    Window *_window;
};
} // namespace star

#endif // STAR_OPENGL_CONTEXT_HPP