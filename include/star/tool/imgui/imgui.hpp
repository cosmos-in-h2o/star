#ifndef STAR_IMGUI_HPP
#define STAR_IMGUI_HPP

#include <star/core/event/event.hpp>
#include <star/core/ecs/scene.hpp>

struct GLFWwindow;

namespace star {
class ImGuiLayer {
  public:
    static void init(GLFWwindow *window);
    static void close();

  private:
    static void update(const Event &e);

    static GLFWwindow *_sWindow;
};
} // namespace star

#endif // !STAR_IMGUI_HPP
