#include "star/core/event/ecs_event.hpp"

namespace star {
AwakeEvent::AwakeEvent() = default;
AwakeEvent::AwakeEvent(EventDispatcher *dispatcher) : _dispatcher(dispatcher) {}
AwakeEvent::~AwakeEvent() = default;
EventType AwakeEvent::getType() const { return EventType::AWAKE_EVENT; }
EventDispatcher *AwakeEvent::getDispatcher() { return _dispatcher; }

StartEvent::StartEvent() = default;
StartEvent::StartEvent(Scene *scene) : _scene(scene) {}
StartEvent::~StartEvent() = default;
EventType StartEvent::getType() const { return EventType::START_EVENT; }
Scene *StartEvent::getScene() { return _scene; }

UpdateEvent::UpdateEvent() = default;
UpdateEvent::UpdateEvent(Scene *scene) : _scene(scene) {}
UpdateEvent::~UpdateEvent() = default;
EventType UpdateEvent::getType() const { return EventType::UPDATE_EVENT; }
Scene *UpdateEvent::getScene() { return _scene; }

DestroyEvent::DestroyEvent() = default;
DestroyEvent::DestroyEvent(Scene *scene) : _scene(scene) {}
DestroyEvent::~DestroyEvent() = default;
EventType DestroyEvent::getType() const { return EventType::DESTROY_EVENT; }
Scene *DestroyEvent::getScene() { return _scene; }
} // namespace star