#include "star/driver/opengl/gl_common.hpp"
// order
#include "star/core/game.hpp"
#include "star/core/io/log.hpp"
#include "star/driver/opengl/index_buffer.hpp"
#include "star/driver/opengl/opengl_context.hpp"
#include "star/driver/opengl/vertex_array.hpp"
#include "star/driver/opengl/vertex_buffer.hpp"
#include "star/driver/opengl/vertex_layout.hpp"
#include "star/function/filesystem/path.hpp"
#include "star/function/render/shader.hpp"
#include "star/platform/windows/windows_window.hpp"
#include "star/resource/loader.hpp"
#include "star/resource/resource_manager.hpp"

int main(int argc, char **argv) {
    star::Log::init("Logger");
    star::ResourceManagerGuard guard;
    star::Window *window = new star::WindowsWindow("sandbox", 1280, 720);
    star::OpenGLContext context(window);
    star::Scene scene;
    star::Game::init("sandbox", window, &scene);
    star::Path::init("D:/program/star/");

    float squareVertices[3 * 4] = {-0.75f, -0.75f, 0.0f, 0.75f,  -0.75f, 0.0f,
                                   0.75f,  0.75f,  0.0f, -0.75f, 0.75f,  0.0f};
    uint32_t squareIndices[6] = {0, 1, 2, 2, 3, 0}; // 索引数据

    star::VertexBuffer vertexBuffer(squareVertices, sizeof(squareVertices));
    star::IndexBuffer indexBuffer(squareIndices, sizeof(squareIndices));
    star::VertexArray vertexArray;
    vertexArray.AddVertexBuffer(vertexBuffer, 0, 3*4*4, GL_FLOAT, GL_FALSE,
                                3 * 4, nullptr);
    vertexArray.AddIndexBuffer(indexBuffer);
    star::Shader shader("res://shader/vertex.vert",
                        "res://shader/fragment.frag");

    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();
        vertexArray.Bind();
        shader.use();
        glDrawElements(GL_ELEMENT_ARRAY_BUFFER, 5, GL_UNSIGNED_INT, nullptr);
    }

    delete window;
    return 0;
}