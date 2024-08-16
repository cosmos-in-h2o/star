#ifndef STAR_SCENE_HPP
#define STAR_SCENE_HPP

#include <entt/entt.hpp>
#include <star/concept.hpp>
#include <star/core/event/event_dispatcher.hpp>
#include <star/rtl/list.hpp>

namespace star {
using Entity = entt::entity;

class Scene {
    template <typename... Ts> struct SystemList {};

    template <typename SL> struct SystemPackTraverser;

    template <typename F, typename... Rs>
    struct SystemPackTraverser<SystemList<F, Rs...>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {
            if constexpr (HasStartFunc<F>) {
                dispatcher.subscribeEvent(EventType::START_EVENT, &F::onStart,
                                          order);
            }
            if constexpr (HasUpdateFunc<F>) {
                dispatcher.subscribeEvent(EventType::UPDATE_EVENT, &F::onUpdate,
                                          order);
            }
            if constexpr (HasDestroyFunc<F>) {
                dispatcher.subscribeEvent(EventType::DESTROY_EVENT,
                                          &F::onDestroy, order);
            }
            SystemPackTraverser<SystemList<Rs...>>::addSystem(
                dispatcher, order); // 递归处理剩余的类型
        }
    };

    template <> struct SystemPackTraverser<SystemList<>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {}
    };

    template <typename SL> struct SystemStartPackTraverser;

    template <typename F, typename... Rs>
    struct SystemStartPackTraverser<SystemList<F, Rs...>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {
            dispatcher.subscribeEvent(EventType::START_EVENT, &F::onStart,
                                      order);
            SystemStartPackTraverser<SystemList<Rs...>>::addSystem(
                dispatcher, order); // 递归处理剩余的类型
        }
    };

    template <> struct SystemStartPackTraverser<SystemList<>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {}
    };

    template <typename SL> struct SystemUpdatePackTraverser;

    template <typename F, typename... Rs>
    struct SystemUpdatePackTraverser<SystemList<F, Rs...>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {
            dispatcher.subscribeEvent(EventType::UPDATE_EVENT, &F::onStart,
                                      order);
            SystemUpdatePackTraverser<SystemList<Rs...>>::addSystem(
                dispatcher, order); // 递归处理剩余的类型
        }
    };

    template <> struct SystemUpdatePackTraverser<SystemList<>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {}
    };

    template <typename SL> struct SystemDestroyPackTraverser;

    template <typename F, typename... Rs>
    struct SystemDestroyPackTraverser<SystemList<F, Rs...>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {
            dispatcher.subscribeEvent(EventType::DESTROY_EVENT, &F::onStart,
                                      order);
            SystemDestroyPackTraverser<SystemList<Rs...>>::addSystem(
                dispatcher, order); // 递归处理剩余的类型
        }
    };

    template <> struct SystemDestroyPackTraverser<SystemList<>> {
        static void addSystem(const EventDispatcher &dispatcher,
                              EventOrder order) {}
    };

  public:
    Scene();
    ~Scene();

    //在场景被加载时调用
    void init();
    //在场景被卸载时调用
    void close();

    Entity createEntity();
    void destroyEntity(Entity entity);

    template <typename... Ss>
    void addSystem(EventOrder order = EventOrder::BASIC) {
        SystemPackTraverser<SystemList<Ss...>>::addSystem(this->_dispatcher,
                                                          order);
    }

    template <typename... S>
    void addSystemStart(EventOrder order = EventOrder::BASIC) {
        SystemStartPackTraverser<SystemList<S...>>::addSystem(this->_dispatcher,
                                                              order);
    }

    template <typename... S>
    void addSystemUpdate(EventOrder order = EventOrder::BASIC) {
        SystemUpdatePackTraverser<SystemList<S...>>::addSystem(
            this->_dispatcher, order);
    }

    template <typename... S>
    void addSystemDestroy(EventOrder order = EventOrder::BASIC) {
        SystemDestroyPackTraverser<SystemList<S...>>::addSystem(
            this->_dispatcher, order);
    }

    template <class T, class... As>
    T &addComponent(Entity entity, As &&...args) {
        return this->_registry.emplace<T>(entity, std::forward<As>(args)...);
    }

    template <class T> T &getComponent(Entity entity) {
        return this->_registry.get<T>(entity);
    }

    template <class T> bool hasComponent(Entity entity) {
        return this->_registry.all_of<T>(entity);
    }

    template <class T> void removeComponent(Entity entity) {
        return this->_registry.remove<T>(entity);
    }

    template <class... Cs> void groupEach(auto callback) {
        this->_registry.group<Cs...>().each(callback);
    }

    template <class... Cs> void groupEachEntity(auto callback) {
        this->_registry.group<Cs...>().each(callback);
    }

    template <class... Cs> auto group() {
        return this->_registry.group<Cs...>();
    }

    template <class... Cs> void viewEach(auto callback) {
        this->_registry.view<Cs...>().each(callback);
    }

    template <class... Cs> void viewEachEntity(auto callback) {
        this->_registry.view<Cs...>().each(callback);
    }

    template <class... Cs> auto view() {
        return this->_registry.view<Cs...>();
    }

    EventDispatcher&getDispatcher();

  private:
    entt::registry _registry;
    EventDispatcher _dispatcher{};
};
} // namespace star

#endif // STAR_SCENE_HPP