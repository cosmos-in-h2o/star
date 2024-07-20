#ifndef STAR_WINDOWS_WINDOW_HPP
#define STAR_WINDOWS_WINDOW_HPP

#include <GLFW/glfw3.h>
#include <star/core/io/log.hpp>
#include <star/core/window.hpp>
#include <star/def.hpp>

namespace star {
class STAR_API WindowsWindow : public Window {
  public:
    WindowsWindow(String title, int32 width, int32 height);
    ~WindowsWindow() override;

    void onUpdate() override;

    void registerEvents() override;

    int32 getWidth() const override;
    int32 getHeight() const override;

    void *getNativeWindow() const override;

    void shutDown() override;

  private:
    GLFWwindow *_window;
    String _title;
    int32 _width, _height;
};
} // namespace star

#endif // STAR_WINDOWS_WINDOW_HPP
