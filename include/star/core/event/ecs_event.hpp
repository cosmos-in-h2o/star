#ifndef STAR_ECS_EVENT_HPP
#define STAR_ECS_EVENT_HPP

#include "star/core/ecs/scene.hpp"
#include "star/core/event/event.hpp"

namespace star {
class AwakeEvent : public Event {
  public:
    AwakeEvent();
    explicit AwakeEvent(EventDispatcher *dispatcher);
    ~AwakeEvent() override;
    EventType getType() const override;
    EventDispatcher *getDispatcher();
  private:
    EventDispatcher*_dispatcher{};
};

class StartEvent : public Event {
  public:
    StartEvent();
    explicit StartEvent(Scene *scene);
    ~StartEvent() override;
    EventType getType() const override;
    Scene *getScene();

  private:
    Scene *_scene{};
};

class UpdateEvent : public Event {
  public:
    UpdateEvent();
    explicit UpdateEvent(Scene *scene);
    ~UpdateEvent() override;
    EventType getType() const override;
    Scene *getScene();

  private:
    Scene *_scene{};
};

class DestroyEvent : public Event {
  public:
    DestroyEvent();
    explicit DestroyEvent(Scene *scene);
    ~DestroyEvent() override;
    EventType getType() const override;
    Scene *getScene();

  private:
    Scene *_scene{};
};
} // namespace star

#endif // STAR_ECS_EVENT_HPP
