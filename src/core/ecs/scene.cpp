#include <star/core/ecs/scene.hpp>

namespace star {
Scene::Scene() { auto a = this->_registry.create(); }

Scene::~Scene() = default;

void Scene::init() {
    this->_dispatcher.dispatchEvent(EventType::START_EVENT, emptyEvent);
    this->_dispatcher.dispatchShortEvent(EventType::START_EVENT, emptyEvent);
}

void Scene::close() {
    this->_dispatcher.dispatchEvent(EventType::DESTROY_EVENT, emptyEvent);
    this->_dispatcher.dispatchShortEvent(EventType::DESTROY_EVENT, emptyEvent);
}

Entity Scene::createEntity() { return this->_registry.create(); }

void Scene::destroyEntity(Entity entity) { this->_registry.destroy(entity); }

EventDispatcher &Scene::getDispatcher() { return this->_dispatcher; }
} // namespace star