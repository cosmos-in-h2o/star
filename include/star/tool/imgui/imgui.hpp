#ifndef STAR_IMGUI_HPP
#define STAR_IMGUI_HPP

#include "star/driver/opengl/gl_common.hpp"
// order
#include "star/core/ecs/scene.hpp"
#include "star/core/event/event.hpp"
#include "star/core/window.hpp"
#include "star/driver/opengl/framebuffer.hpp"
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
    static void menuBar();
    static Window *_window;
};
} // namespace star

#endif // !STAR_IMGUI_HPP
