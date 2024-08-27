#include "star/star.hpp"
//
#include "data/scene_data.hpp"
#include "elements/detail.hpp"
#include "elements/hierarchy.hpp"
#include "elements/menubar.hpp"
#include "elements/scene_view.hpp"
#include <fstream>

using namespace star;

int main(int argc, char **argv) {
    Log::init("StarEditor");
    std::unique_ptr<Window> window(
        new WindowsWindow("StarEditor", 1280, 720, nullptr));
    OpenGLContext context(window.get());
    star::Path::init("D:/program/star/");

    ImGUI::init(window.get());
    ImGUI::menuBarFunc = menubar;

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
    sprite.material = star::ResourceManager::emplaceLoadResource<Material2D>(
        "material",
        star::ResourceManager::emplaceLoadResource<GLTexture2D>(
            "glTexture",
            star::ResourceManager::hasResource("texture")
                ? star::ResourceManager::getResource<Texture2D>("texture")
                      .operator*()
                : star::ResourceManager::loadResource<Texture2D>(
                      "texture", star::Loader::loadTexture2D("res://star.png"))
                      .operator*()),
        star::ResourceManager::emplaceLoadStaticResource<star::Shader>(
            "defaultShader", "res://resource/shader/vertex.vert",
            "res://resource/shader/fragment.frag"));
    sprite.bindVertex();

    star::DefaultBind::starBindFunc();
    SceneData data("scene1");
    data.loadFromFile("./out.put");
    Hierarchy hierarchy{};
    Detail detail{};
    ivec4 viewport;
    vec2 framebufferSize = framebuffer.getSize();
    SceneView sceneView{&framebuffer, &framebufferSize, &camera, &viewport};
    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();

        framebuffer.bind();
        glViewport(viewport.x, viewport.y, viewport.z, viewport.w);
        glClear(GL_COLOR_BUFFER_BIT);

        sprite.draw(camera.getViewProjectionMat());
        framebuffer.unbind();

        ImGUI::begin();

        sceneView.draw();
        hierarchy.draw(&data);
        detail.draw(hierarchy.entity);

        ImGUI::end();
    }
    ImGUI::close();
    Collector::garbageCollect();
    data.writeToFile("out.put");
    return 0;
}
