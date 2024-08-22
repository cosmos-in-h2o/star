#ifndef STAR_WINDOWS_WINDOW_HPP
#define STAR_WINDOWS_WINDOW_HPP

#include "star/core/window.hpp"
#include "star/function/render/color.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

typedef struct GLFWwindow GLFWwindow;

namespace star {
class WindowsWindow : public Window {
  public:
    WindowsWindow(StringView title, int32_t width, int32_t height);
    ~WindowsWindow() override;

    int32_t getWidth() const override { return this->_width; }
    int32_t getHeight() const override { return this->_height; }
    void *getNativeWindow() const override {
        return static_cast<void *>(this->_window);
    };
    bool shouldClose() const override {
        return glfwWindowShouldClose(
            static_cast<GLFWwindow *>(this->getNativeWindow()));
    }

    void setBGColor(const Color &color) override {
        glClearColor(color.r, color.g, color.b, color.a);
    }

    void clear() override;
    void registerDispatch(EventDispatcher &dispatcher) override;

    uint32_t VSync() override { return 0; }

  private:
    void registerCallback();
    GLFWwindow *_window{};
    String _title;
    int32_t _width, _height;
};
} // namespace star

#endif // STAR_WINDOWS_WINDOW_HPP
