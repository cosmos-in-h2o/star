#ifndef STAR_IMGUI_HPP
#define STAR_IMGUI_HPP

#include "star/core/event/event.hpp"
#include "star/core/ecs/scene.hpp"
#include "star/core/window.hpp"
#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

struct GLFWwindow;

namespace star {
class ImGUI {
  public:
    static void init(Window *window);
    static void close();
    static void begin();
    static void end();

  private:

    static GLFWwindow *_window;
};
} // namespace star

#endif // !STAR_IMGUI_HPP
