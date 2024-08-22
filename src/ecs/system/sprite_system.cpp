#include "star/driver/opengl/gl_common.hpp"
// order
#include "star/core/event/ecs_event.hpp"
#include "star/ecs/system/sprite_system.hpp"
#include "star/function/render/renderer2d.hpp"

namespace star {
void SpriteSystem::entryPoint(const Event &event) {
    auto e1 = EventConvert<AwakeEvent>(event);
    e1->getDispatcher()->subscribeEvent(
        EventType::START_EVENT, [](const Event &e) {
            auto e2 = EventConvert<StartEvent>(e);
            SpriteSystem::onStart(e2->getScene());
        });

    e1->getDispatcher()->subscribeEvent(
        EventType::UPDATE_EVENT, [](const Event &e) {

            auto e2 = EventConvert<UpdateEvent>(e);
            SpriteSystem::onUpdate(e2->getScene());
        });

    e1->getDispatcher()->subscribeEvent(
        EventType::DESTROY_EVENT, [](const Event &e) {
            auto e2 = EventConvert<DestroyEvent>(e);
            SpriteSystem::onDestroy(e2->getScene());
        });
}

void SpriteSystem::onStart(Scene *scene) {
    scene->viewEach<Sprite>([](Sprite &sprite) { sprite.bindVertex(); });
}

void SpriteSystem::onUpdate(Scene *scene) {
    scene->viewEach<Sprite>(
        [](Sprite &sprite) { Renderer2D::submit(&sprite); });
}

void SpriteSystem::onDestroy(Scene *scene) {}
} // namespace star