#include "star/star.hpp"

int main(int argc, char **argv) {
    star::Log::init("Logger");

    star::Window *window =
        new star::WindowsWindow("sandbox", 1280, 720, nullptr);
    star::OpenGLContext context(window);
    star::Path::init("D:/program/star/");
    star::Game::init("sandbox", window);

    star::ImGUI::init(window);

    star::ResourceManager::init();

    star::Transform2D cameraTransform;
    star::Camera2D camera;
    camera.transform = &cameraTransform;
    window->setCamera(&camera);
    auto texture = star::ResourceManager::loadResource<star::Texture2D>(
        "texture", star::Loader::loadTexture2D(
                       "res://star_editor/resource/background.png"));

    star::Transform2D transform;
    star::Sprite sprite;
    sprite.size = star::vec2{1280, 720};
    sprite.transform = &transform;
    sprite.shader =
        star::ResourceManager::emplaceLoadStaticResource<star::Shader>(
            "shader1", "res://resource/shader/vertex.vert",
            "res://resource/shader/fragment.frag");
    sprite.texture =
        star::ResourceManager::emplaceLoadStaticResource<star::GLTexture2D>(
            "glTexture2D", *texture);
    sprite.bindVertex();

    star::EventDispatcher dispatcher;
    window->registerDispatch(dispatcher);
    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();
        star::ImGUI::begin();
        ImGui::Begin((const char *)u8"窗口");
        ImGui::SliderFloat2(
            "Position", star::value_ptr(cameraTransform.position), -1024, 1024);
        ImGui::SliderFloat("Rotation", &cameraTransform.rotation, -360, 360);
        ImGui::SliderFloat2("Scale", star::value_ptr(transform.scale), -32, 32);
        ImGui::ColorEdit4("color", star::value_ptr(sprite.color));
        ImGui::End();
        sprite.draw(camera.getViewProjectionMat());
        star::ImGUI::end();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    star::ImGUI::close();
    delete window;
    star::ResourceManager::close();
    star::Game::close();
    return 0;
}