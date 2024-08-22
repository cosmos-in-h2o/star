#ifndef STAR_SPRITE_SYSTEM_HPP
#define STAR_SPRITE_SYSTEM_HPP
#include "star/core/ecs/scene.hpp"
#include "star/ecs/component/sprite.hpp"

namespace star {
class SpriteSystem {
  public:
    static void entryPoint(const Event& event);
  private:
    static void onStart(Scene *scene);
    static void onUpdate(Scene *scene);
    static void onDestroy(Scene *scene);
};
} // namespace star
#endif // STAR_SPRITE_SYSTEM_HPP