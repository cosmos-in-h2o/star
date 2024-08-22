#include "star/core/ecs/scene.hpp"

namespace star {
Entity::Entity() = default;

Entity::Entity::Entity(Scene *scene, entt::entity entity)
    : _scene(scene), _entity(entity) {}

//会被场景自动删除
Entity::~Entity() = default;
} // namespace star