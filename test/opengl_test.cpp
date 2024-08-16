#include "star/driver/opengl/gl_common.hpp"
// order
#include "star/core/io/log.hpp"
#include "star/driver/opengl/opengl_context.hpp"
#include "star/driver/opengl/vertex_array.hpp"
#include "star/driver/opengl/vertex_buffer.hpp"
#include "star/driver/opengl/vertex_layout.hpp"
#include "star/function/filesystem/path.hpp"
#include "star/function/render/shader.hpp"
#include "star/platform/windows/windows_window.hpp"

int main() {
    star::Log::init("Logger");
    star::Window *window = new star::WindowsWindow("sandbox", 1280, 720);
    star::OpenGLContext context(window);
    star::Path::init("D:/program/star/");
    float vertices[] = {-0.5f, -0.5f, 0.0f, 0.5f, -0.5f,
                        0.0f,  0.0f,  0.5f, 0.0f};
    uint32_t indices[] = {0, 1, 2};
    star::VertexBuffer vertexBuffer(vertices, sizeof(vertices));
    star::VertexArray vertexArray;
    vertexArray.addVertexBuffer(vertexBuffer, 0, 3, GL_FLOAT, GL_FALSE,
                                3 * sizeof(float), nullptr);
    star::IndexBuffer indexBuffer(indices, sizeof(indices));
    star::Shader shader("res://shader/vertex.vert",
                        "res://shader/fragment.frag");
    while (!window->shouldClose()) {
        glfwPollEvents();
        window->clear();
        shader.use();
        vertexArray.bind();
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
        context.swapBuffer();
    }
    delete window;
    return 0;
}