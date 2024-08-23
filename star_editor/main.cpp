#include "dockspaces/game.hpp"
#include "star/star.hpp"

using namespace star;

int main(int argc, char **argv) {
    Log::init("StarEditor");
    std::unique_ptr<Window> window(
        new WindowsWindow("StarEditor", 1280, 720, nullptr));
    OpenGLContext context(window.get());
    star::Path::init("D:/program/star/");

    ImGUI::init(window.get());

    star::ResourceManager::init();

    star::Framebuffer framebuffer({1280, 720});

    star::Transform2D cameraTransform;
    star::Camera2D camera;
    camera.transform = &cameraTransform;
    camera.viewport = {1920, 1080};

    window->setCamera(&camera);
    window->setVSync(1);

    auto texture = star::ResourceManager::loadResource<star::Texture2D>(
        "texture", star::Loader::loadTexture2D(
                       "res://star_editor/resource/background.png"));

    star::Transform2D transform;
    star::Sprite sprite;
    sprite.size = star::vec2{1920, 1080};
    sprite.transform = &transform;
    sprite.shader =
        star::ResourceManager::emplaceLoadStaticResource<star::Shader>(
            "shader1", "res://resource/shader/vertex.vert",
            "res://resource/shader/fragment.frag");
    sprite.texture =
        star::ResourceManager::emplaceLoadStaticResource<star::GLTexture2D>(
            "glTexture2D", *texture);
    sprite.bindVertex();

    ivec4 viewport;
    vec2 framebufferSize = framebuffer.getSize();
    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();

        framebuffer.bind();
        glViewport(viewport.x, viewport.y, viewport.z, viewport.w);

        sprite.draw(camera.getViewProjectionMat());
        framebuffer.unbind();

        ImGUI::begin();

        GameSpace(framebuffer, camera, viewport, framebufferSize);

        ImGUI::end();
    }
    ImGUI::close();
    return 0;
}
