#include "star/platform/windows/windows_window.hpp"
#include "star/core/event/event_dispatcher.hpp"
#include <GLFW/glfw3.h>

namespace star {
static void framebufferResizeCallBack(GLFWwindow *window, int width,
                                      int height) {
    auto dataPtr = static_cast<WindowsWindow::WindowData *>(
        glfwGetWindowUserPointer(window));
    int32_t *posArr = dataPtr->pos;
    posArr[0] = width;
    posArr[1] = height;
    auto viewPort = dataPtr->window->getCamera()->getViewport({width, height});
    glViewport(viewPort.x, viewPort.y, viewPort.z, viewPort.w);
}

WindowsWindow::WindowsWindow(StringView title, int32_t width, int32_t height,
                             Camera *camera)
    : _title(title), _width(width), _height(height), _camera(camera) {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef STAR_PLATFORM_MACOS
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif
    this->_window = glfwCreateWindow(this->_width, this->_height,
                                     this->_title.c_str(), nullptr, nullptr);
    glfwSetWindowUserPointer(this->_window, &data);
}

WindowsWindow::~WindowsWindow() {
    glfwDestroyWindow(this->_window);
    glfwTerminate();
}

void WindowsWindow::clear() { glClear(GL_COLOR_BUFFER_BIT); }

void WindowsWindow::registerDispatch(EventDispatcher &dispatcher) {
    data.dispatcher = &dispatcher;
    glfwSetKeyCallback(
        (GLFWwindow *)this->_window,
        [](GLFWwindow *window, int key, int scancode, int action, int mods) {
            auto dispatcher =
                static_cast<WindowData *>(glfwGetWindowUserPointer(window))
                    ->dispatcher;
            switch (action) {
            case GLFW_PRESS: {
                KeyPressedEvent event(glfwKeyConvert(key), false);
                dispatcher->dispatchEvent(EventType::KEY_PRESSED, event);
                break;
            }
            case GLFW_RELEASE: {
                KeyReleasedEvent event(glfwKeyConvert(key));
                break;
            }
            case GLFW_REPEAT: {
                KeyTypedEvent event(glfwKeyConvert(key));
                dispatcher->dispatchEvent(EventType::KEY_TYPED, event);
                break;
            }
            default:
                break;
            }
        });
    data.pos = _pos;
    data.window = this;
    glfwSetFramebufferSizeCallback((GLFWwindow *)_window,
                                   framebufferResizeCallBack);
    // glfw event
    /*
    1. 窗口大小改变事件(Window Resize)
    处理方法:注册回调函数 glfwSetWindowSizeCallback()

    2. 窗口关闭事件(Window Close)
    处理方法:注册回调函数 glfwSetWindowCloseCallback()

    3. 窗口焦点事件(Window Focus)
    处理方法:注册回调函数 glfwSetWindowFocusCallback()

    4. 窗口移动事件(Window Move)
    处理方法:注册回调函数 glfwSetWindowPosCallback()

    5. 键盘输入事件(Key Input)
    处理方法:注册回调函数 glfwSetKeyCallback()

    6. 鼠标按键事件(Mouse Button)
    处理方法:注册回调函数 glfwSetMouseButtonCallback()

    7. 鼠标移动事件(Mouse Move)
    处理方法:注册回调函数 glfwSetCursorPosCallback()

    8. 鼠标滚轮事件(Mouse Scroll)
    处理方法:注册回调函数 glfwSetScrollCallback()

    9. 文字输入事件(Character Input)
    处理方法:注册回调函数 glfwSetCharCallback()

    10. 窗口内容刷新事件(Framebuffer Size)
    处理方法:注册回调函数 glfwSetFramebufferSizeCallback()

    处理这些事件的一般步骤是:

    1. 定义回调函数来处理特定事件
    2. 使用相应的glfwSet*Callback()函数注册回调
    3. 在主循环中调用glfwPollEvents()来处理所有待处理的事件
     */
    /*
     // 窗口大小改变回调
    void window_size_callback(GLFWwindow* window, int width, int height)
    // window: 发生事件的窗口句柄
    // width: 新的窗口宽度
    // height: 新的窗口高度

    // 窗口关闭回调
    void window_close_callback(GLFWwindow* window)
    // window: 即将关闭的窗口句柄

    // 窗口焦点回调
    void window_focus_callback(GLFWwindow* window, int focused)
    // window: 发生焦点变化的窗口句柄
    // focused: 1 表示获得焦点，0 表示失去焦点

    // 窗口位置移动回调
    void window_pos_callback(GLFWwindow* window, int xpos, int ypos)
    // window: 被移动的窗口句柄
    // xpos: 窗口左上角的新 X 坐标
    // ypos: 窗口左上角的新 Y 坐标

    // 键盘输入回调
    void key_callback(GLFWwindow* window, int key, int scancode, int action, int
    mods)
    // window: 接收输入的窗口句柄
    // key: 按键的 GLFW 键码
    // scancode: 系统特定的扫描码
    // action: GLFW_PRESS, GLFW_RELEASE 或 GLFW_REPEAT
    // mods: 位掩码，表示同时按下的修饰键（Shift, Control, Alt, Super）

    // 鼠标按键回调
    void mouse_button_callback(GLFWwindow* window, int button, int action, int
    mods)
    // window: 接收输入的窗口句柄
    // button: 被按下或释放的鼠标按钮
    // action: GLFW_PRESS 或 GLFW_RELEASE
    // mods: 位掩码，表示同时按下的修饰键

    // 鼠标移动回调
    void cursor_position_callback(GLFWwindow* window, double xpos, double ypos)
    // window: 接收输入的窗口句柄
    // xpos: 鼠标光标的新 X 坐标
    // ypos: 鼠标光标的新 Y 坐标

    // 鼠标滚轮回调
    void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
    // window: 接收输入的窗口句柄
    // xoffset: 水平滚动偏移量
    // yoffset: 垂直滚动偏移量

    // 文字输入回调
    void character_callback(GLFWwindow* window, unsigned int codepoint)
    // window: 接收输入的窗口句柄
    // codepoint: 输入字符的 Unicode 码点

    // 帧缓冲大小回调
    void framebuffer_size_callback(GLFWwindow* window, int width, int height)
    // window: 帧缓冲大小改变的窗口句柄
    // width: 新的帧缓冲宽度
    // height: 新的帧缓冲高度
     */
}

Camera *WindowsWindow::getCamera() { return _camera; }

void WindowsWindow::setCamera(Camera *camera) { _camera = camera; }
} // namespace star