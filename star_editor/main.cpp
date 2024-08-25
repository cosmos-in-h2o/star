#include "star/star.hpp"
//
#include "data/scene_data.hpp"
#include "dockspaces/game.hpp"
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
    sprite.shader =
        star::ResourceManager::emplaceLoadStaticResource<star::Shader>(
            "shader1", "res://resource/shader/vertex.vert",
            "res://resource/shader/fragment.frag");
    sprite.texture =
        star::ResourceManager::emplaceLoadStaticResource<star::GLTexture2D>(
            "glTexture2D", *texture);
    sprite.bindVertex();

    ComponentData componentData("component", "star::Transform");
    componentData.addData("position", "x", 1);
    componentData.addData("position", "y", 1);
    componentData.addData("position", "z", 1);

    ComponentData componentData2("component", "star::Transform");
    componentData2.addData("position", "x", 1);
    componentData2.addData("position", "y", 1);
    componentData2.addData("position", "z", 1);

    EntityData entity("entity");
    entity.addComponent(componentData);

    EntityData entity2("entity2");
    entity2.addComponent(componentData2);

    SceneData data("scene1");
    data.addEntity("ui", entity);
    data.addEntity("ui", entity2);
    data.addEntity("light", entity);
    data.addEntity("light", entity2);

    auto data1 = SceneData::loadFromFile("scene1.scene");

    ivec4 viewport;
    vec2 framebufferSize = framebuffer.getSize();
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

        GameSpace(framebuffer, camera, viewport, framebufferSize);
        ImGui::Begin("hirachy");
        ImGui::Text("star::Transform2D");

        ImGui::SliderFloat2(
            "Position", star::value_ptr(cameraTransform.position), -1024, 1024);
        ImGui::SliderFloat("Rotation", &cameraTransform.rotation, -360, 360);
        ImGui::SliderFloat2("Scale", star::value_ptr(transform.scale), -32, 32);
        ImGui::ColorEdit4("color", star::value_ptr(sprite.color));

        ImGui::End();

        ImGUI::end();
    }
    auto p=&star::Transform2D::position;
    Transform2D t;
    t.*p={2,3};
    ImGUI::close();
    return 0;
}
