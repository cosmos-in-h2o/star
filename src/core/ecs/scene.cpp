#include "star/core/event/ecs_event.hpp"
#include "star/core/ecs/scene.hpp"
#include <yaml-cpp/yaml.h>

namespace star {
Scene::Scene() { auto a = this->_registry.create(); }

Scene::~Scene() {
    DestroyEvent destroyEvent(this);
    this->_dispatcher.dispatchEvent(EventType::DESTROY_EVENT, destroyEvent);
    for (const auto &p : _entities) {
        _registry.destroy(p.second);
    }
}

void Scene::init() {
    AwakeEvent awakeEvent(&_dispatcher);
    this->_dispatcher.dispatchEvent(EventType::AWAKE_EVENT, awakeEvent);
    StartEvent startEvent(this);
    this->_dispatcher.dispatchEvent(EventType::START_EVENT, startEvent);
}

Entity Scene::addEntity(const String &name) {
    std::unique_lock<std::mutex> uniqueLock(_mutex);
    auto entity = _registry.create();
    _entities[name] = entity;
    uniqueLock.unlock();
    return {this, entity};
}

EventDispatcher &Scene::getDispatcher() { return this->_dispatcher; }

Scene *Scene::createScene() { return new Scene; }

Scene *Scene::createSceneFromFile(StringView path) { return nullptr; }
} // namespace star