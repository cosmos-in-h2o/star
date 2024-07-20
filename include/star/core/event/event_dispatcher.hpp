#ifndef STAR_EVENT_MANAGER_HPP
#define STAR_EVENT_MANAGER_HPP

#include <shared_mutex>
#include <star/def.hpp>
#include <star/core/event/event.hpp>
#include <star/core/event/input_event.hpp>
#include <star/rtl/hash_map.hpp>
#include <star/rtl/list.hpp>

namespace star {
class STAR_API EventDispatcher {
  public:
    static void init();
    static void subscribeEvent(EventType type, const EventCb &callback);
    static void dispatchEvent(EventType type, const Event &event);
    static void removeListener(EventType type);
    static void removeListener(const EventCb &callback);
    static void removeListener(EventType type, const EventCb &callback);

    static void shortSubscribeEvent(EventType type, const EventCb &callback);
    static void dispatchShortEvent(EventType type, const Event &event);
    static void removeShortListener(EventType type);
    static void removeShortListener(const EventCb &callback);
    static void removeShortListener(EventType type, const EventCb &callback);
  private:
    static HashMap<EventType, List<EventCb>> _listeners;
    static HashMap<EventType, List<EventCb>> _shortListeners;
    static std::shared_mutex _mutex;
    static std::shared_mutex _mutex2;
};
} // namespace star

#endif // STAR_EVENT_MANAGER_HPP
