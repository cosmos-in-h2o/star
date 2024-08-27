#ifndef STAR_SCENE_HPP
#define STAR_SCENE_HPP

#include "star/core/event/event_dispatcher.hpp"
#include "star/resource/ref.hpp"
#include "star/rtl/list.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
#include <entt/entt.hpp>

namespace star {
class Scene;
class Entity;

class Entity {
  public:
    Entity();
    Entity(Scene *scene, entt::entity entity);
    ~Entity();

    template <class T> T &addComponent(auto &&...args);
    template <class T> T &getComponent();
    template <class T> bool hasComponent();
    template <class T> void removeComponent();

  private:
    Scene *_scene{};
    entt::entity _entity{};
};

class Scene {
    friend class Entity;

  public:
    Scene();
    ~Scene();

    // 在场景被加载时调用
    void init();

    Entity addEntity(const String &name);
    bool hasEntity(const String &name);
    Entity getEntity(const String &name);

    template <class... Cs> void groupEach(auto callback) {
        this->_registry.group<Cs...>().each(callback);
    }

    template <class... Cs> void groupEachWithEntity(auto callback) {
        this->_registry.group<Cs...>().each(
            [this, &callback](entt::entity entity, Cs &...args) {
                auto e = Entity{this, entity};
                callback(e, args...);
            });
    }

    template <class... Cs> auto group() {
        return this->_registry.group<Cs...>();
    }

    template <class... Cs> void viewEach(auto callback) {
        this->_registry.view<Cs...>().each(callback);
    }

    template <class... Cs> void viewEachWithEntity(auto callback) {
        this->_registry.view<Cs...>().each(
            [this, &callback](entt::entity entity, Cs &...args) {
                auto e = Entity{this, entity};
                callback(e, args...);
            });
    }

    template <class... Cs> auto view() { return this->_registry.view<Cs...>(); }

    EventDispatcher &getDispatcher();

    static Scene *createScene();
    static Scene *createSceneFromFile(StringView path);

  private:
    entt::registry _registry{};
    EventDispatcher _dispatcher{};
    SafeHashMap<String, entt::entity> _entities{};
};

template <class T> T &Entity::addComponent(auto &&...args) {
    return _scene->_registry.emplace<T>(_entity,
                                        std::forward<decltype(args)>(args)...);
}

template <class T> T &Entity::getComponent() {
    return _scene->_registry.get<T>(_entity);
}

template <class T> bool Entity::hasComponent() {
    return _scene->_registry.all_of<T>(_entity);
}

template <class T> void Entity::removeComponent() {
    return _scene->_registry.remove<T>(_entity);
}
} // namespace star

#endif // STAR_SCENE_HPP