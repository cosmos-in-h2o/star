#include "star/core/io/input.hpp"
#include "GLFW/glfw3.h"
#include "star/core/event/event.hpp"
#include "star/core/os/key.hpp"

namespace star {
GLFWwindow *Input::_window{};

void Input::init(GLFWwindow *window) { _window = window; }

bool Input::isKeyPressed(Key key) {
    auto state = glfwGetKey(_window, starKeyConvert(key));
    return state == GLFW_PRESS || state == GLFW_REPEAT;
}

bool Input::isMouseButtonPressed(int key) {
    return glfwGetMouseButton(_window, key) == GLFW_PRESS;
}
} // namespace star
