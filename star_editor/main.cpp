#include "star/star.hpp"
//
#include "data/scene_data.hpp"
#include "dockspaces/scene_view.hpp"
#include <fstream>

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
    data.addEntity("ui", "entity");
    data.addEntity("ui", "entity2");
    data.addEntity("light", "entity");
    data.addEntity("light", "entity2").addComponent("star::Transform2D");
    data.writeToFile("out.put");

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
        ImGui::Begin("Hierarchy");
        ImGui::Text("star::Transform2D");

        ImGui::SliderFloat2(
            "Position", star::value_ptr(cameraTransform.position), -1024, 1024);
        ImGui::SliderFloat("旋转角", &cameraTransform.rotation, -360, 360);
        ImGui::DragFloat2("Scale", star::value_ptr(transform.scale), 0.01f);
        ImGui::ColorEdit4("color", star::value_ptr(sprite.color));
        ImGui::End();

        ImGUI::end();
    }
    auto p = &star::Transform2D::position;
    Transform2D t;
    t.*p = {2, 3};
    ImGUI::close();
    Collector::garbageCollect();
    return 0;
}
