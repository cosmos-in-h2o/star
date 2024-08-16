#ifndef STAR_INPUT_HPP
#define STAR_INPUT_HPP

#include <star/def.hpp>
#include <star/core/os/key.hpp>

struct GLFWwindow;

namespace star {
class Input {
  public:
    static void init(GLFWwindow*window);
    static bool isKeyPressed(Key key);
  private:
    static GLFWwindow* _sWindow;
};
}

#endif // STAR_INPUT_HPP
