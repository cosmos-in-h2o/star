#include "star/driver/opengl/gl_common.hpp"
// order
#include "star/core/ecs/scene.hpp"
#include "star/core/event/ecs_event.hpp"
#include "star/core/game.hpp"
#include "star/core/io/log.hpp"
#include "star/core/time_step.hpp"
#include "star/driver/opengl/opengl_context.hpp"
#include "star/driver/opengl/vertex_layout.hpp"
#include "star/ecs/component/camera2d.hpp"
#include "star/ecs/system/sprite_system.hpp"
#include "star/function/filesystem/path.hpp"
#include "star/function/render/renderer2d.hpp"
#include "star/function/render/shader.hpp"
#include "star/platform/windows/windows_window.hpp"
#include "star/resource/resource_manager.hpp"

star::Scene *scene1() {
    auto shader =
        star::ResourceManager::emplaceLoadStaticResource<star::Shader>(
            "shader1", "res://resource/shader/vertex.vert",
            "res://resource/shader/fragment.frag");

    auto texture = star::ResourceManager::loadResource<star::Texture2D>(
        "texture",
        star::Loader::loadTexture2D("res://resource/test/texture.jpg"));

    auto glTexture2D =
        star::ResourceManager::emplaceLoadStaticResource<star::GLTexture2D>(
            "glTexture2D", *texture);

    auto scene = star::Scene::createScene();

    auto obj = scene->addEntity("entity1");
    auto &transformCom = obj.addComponent<star::Transform2D>();
    transformCom.scale = star::vec2{2, 2};
    auto &spriteCom = obj.addComponent<star::Sprite>();
    spriteCom.transform = &transformCom;
    spriteCom.texture = glTexture2D;
    spriteCom.shader = shader;
    spriteCom.color = star::vec4{1, 1, 1, 1};

    spriteCom.size = star::vec2{1080, 1080};
    scene->getDispatcher().subscribeEvent(star::EventType::AWAKE_EVENT,
                                          star::SpriteSystem::entryPoint);
    return scene;
}

int main() {
    star::Log::init("Logger");
    STAR_RESOURCE_MANAGER_GUARD
    star::Window *window = new star::WindowsWindow("sandbox", 1280, 720);
    star::OpenGLContext context(window);
    star::Path::init("D:/program/star/");
    star::TimeStep::init(window);

    star::Transform2D transform;
    transform.position = star::vec2{0, 0};
    transform.scale = star::vec2{1, 1};

    star::Camera2D camera;
    camera.transform = &transform;

    star::Renderer2D::init(&camera);

    star::Game::init("sandbox", window);

    auto scene = scene1();
    star::Game::addScene("scene1", scene);
    star::Game::loadScene("scene1");

    star::TimeStep::setTargetFPS(120);

    double b, e, ts = 1;
    while (!window->shouldClose()) {
        // do something
        b = glfwGetTime();
        glfwPollEvents();
        window->clear();
        star::Renderer2D::begin();

        star::UpdateEvent event(star::Game::getActiveScene());
        star::Game::getActiveScene()->getDispatcher().dispatchEvent(
            star::EventType::UPDATE_EVENT, event);

        star::Renderer2D::end();
        context.swapBuffer();

        e = glfwGetTime();
        ts = e - b;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    star::Game::close();
    delete window;
    return 0;
}