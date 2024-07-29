#include <GLFW/glfw3.h>
#include <star/core/application.hpp>
#include <star/core/error/error.hpp>
#include <star/tool/imgui/imgui.hpp>

namespace star {
Application::Application(const String &name, int32 width, int32 height) {
    this->_window = new WindowsWindow(name, width, height);

    this->init(name);
}

Application::~Application() { this->close(); }

void Application::init(const String &name) {
    STAR_ASSERT(this->_window,ErrorType::INITIALIZATION,"Application")
    Log::init(name);
    EventDispatcher::init();
    ImGuiLayer::init((GLFWwindow *)this->_window->getNativeWindow());
    this->registerEvents();
    EventDispatcher::dispatchEvent(EventType::START_EVENT, emptyEvent);
}

void Application::close() {
    EventDispatcher::dispatchEvent(EventType::DESTROY_EVENT, emptyEvent);
    ImGuiLayer::close();
    if (this->_window) {
        delete this->_window;
        this->_window = nullptr;
    }
}

void Application::registerEvents() {
    ImGuiLayer::registerEvents();
    this->_window->registerDispatch();
    this->_window->registerEvents();
    EventDispatcher::sortEvents();
}

int Application::run() {
    while (!glfwWindowShouldClose(
        (GLFWwindow *)this->_window->getNativeWindow())) {
        EventDispatcher::dispatchEvent(EventType::UPDATE_EVENT, emptyEvent);
    }
    return 0;
}

} // namespace star
