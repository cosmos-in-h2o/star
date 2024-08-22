#ifndef STAR_INPUT_HPP
#define STAR_INPUT_HPP

#include "star/core/os/key.hpp"

struct GLFWwindow;

namespace star {
class Input {
  public:
    static void init(GLFWwindow *window);
    static bool isKeyPressed(Key key);
    static bool isMouseButtonPressed(int key);

  private:
    static GLFWwindow *_window;
};
} // namespace star

#endif // STAR_INPUT_HPP
