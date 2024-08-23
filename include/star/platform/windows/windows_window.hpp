#ifndef STAR_WINDOWS_WINDOW_HPP
#define STAR_WINDOWS_WINDOW_HPP

#include "star/core/window.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/function/render/color.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

typedef struct GLFWwindow GLFWwindow;

namespace star {
class WindowsWindow : public Window {
  public:
    struct WindowData {
        WindowsWindow *window;
        EventDispatcher *dispatcher;
        int32_t *pos;
    };
    WindowsWindow(StringView title, int32_t width, int32_t height,
                  Camera *camera);
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
    Camera *getCamera() override;
    void setCamera(Camera *camera) override;

    uint32_t VSync() override { return 0; }
    void setVSync(int level) override {
        glfwSwapInterval(level);
        _vsync = level;
    }

    WindowData data{};

  private:
    GLFWwindow *_window{};
    String _title;
    Camera *_camera;
    int _vsync;

    union {
        struct {
            int32_t _width, _height;
        };
        int32_t _pos[2]{};
    };
};
} // namespace star

#endif // STAR_WINDOWS_WINDOW_HPP
