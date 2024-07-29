#ifndef STAR_WINDOWS_WINDOW_HPP
#define STAR_WINDOWS_WINDOW_HPP

#include <star/core/io/log.hpp>
#include <star/core/window.hpp>
#include <star/def.hpp>
#include <star/platform/opengl/opengl_context.hpp>

typedef struct GLFWwindow GLFWwindow;

namespace star {
class STAR_API WindowsWindow : public Window {
  public:
    WindowsWindow(String title, int32 width, int32 height);
    ~WindowsWindow() override;

    void onStart(const Event &e);
    void onUpdate(const Event &e);
    void onDestroy(const Event &e);

    int32 getWidth() const override;
    int32 getHeight() const override;

    void *getNativeWindow() const override;

    void registerDispatch() override;
    void registerEvents() override;

  private:
    GLFWwindow *_window;
    GraphicsContext *_context;
    String _title;
    int32 _width, _height;
};
} // namespace star

#endif // STAR_WINDOWS_WINDOW_HPP
