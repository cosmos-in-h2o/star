#include "star/driver/opengl/opengl_context.hpp"
#include "star/core/error/error.hpp"

namespace star {
OpenGLContext::OpenGLContext(star::Window *window) {
    if (!window) {
        ErrorHandler::reportError(makeError(ErrorType::NULLPTR_ARG), "window");
        return;
    }
    _window = window;
    glfwMakeContextCurrent(
        static_cast<GLFWwindow *>(window->getNativeWindow()));
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        ErrorHandler::reportError(makeError(ErrorType::INITIALIZATION), "glad");
        return;
    }
    Log::info("Vendor:{0}", (const char *)glGetString(GL_VENDOR));
    Log::info("graphics: {0}", (const char *)glGetString(GL_RENDERER));
    Log::info("version:{0}", (const char *)glGetString(GL_VERSION));
}

OpenGLContext::~OpenGLContext() = default;

void OpenGLContext::swapBuffer() {
    glfwSwapBuffers(static_cast<GLFWwindow *>(_window->getNativeWindow()));
}
} // namespace star