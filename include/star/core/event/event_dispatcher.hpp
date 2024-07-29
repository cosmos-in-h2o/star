#ifndef STAR_EVENT_MANAGER_HPP
#define STAR_EVENT_MANAGER_HPP

#include <shared_mutex>
#include <star/core/event/event.hpp>
#include <star/core/event/input_event.hpp>
#include <star/def.hpp>
#include <star/rtl/hash_map.hpp>
#include <star/rtl/list.hpp>

namespace star {
enum class EventOrder :int64 {
    BASIC=0
};

class STAR_API EventDispatcher {
    struct OrderCallable {
        EventOrder order;
        EventCb callable;
        OrderCallable(EventOrder order, const EventCb &callable);
        OrderCallable(EventOrder order, EventCb &&callable);
        bool operator<(const OrderCallable& other) const;
        bool operator>(const OrderCallable& other) const;
    };

  public:
    static void init();
    static void subscribeEvent(EventType type, const EventCb &callback,
                               EventOrder order = EventOrder::BASIC);
    static void dispatchEvent(EventType type, const Event &event);
    static void removeListener(EventType type);
    static void removeListener(const EventCb &obj);
    static void removeListener(EventType obj, const EventCb &callback);

    static void shortSubscribeEvent(EventType type, const EventCb &callback,
                                    EventOrder order = EventOrder::BASIC);
    static void dispatchShortEvent(EventType type, const Event &event);
    static void removeShortListener(EventType type);
    static void removeShortListener(const EventCb &obj);
    static void removeShortListener(EventType obj, const EventCb &callback);

    static void sortEvents();

  private:
    static HashMap<uint64, List<OrderCallable>> _listeners;
    static HashMap<uint64, List<OrderCallable>> _shortListeners;
    static std::shared_mutex _mutex;
    static std::shared_mutex _mutex2;
};
} // namespace star

#endif // STAR_EVENT_MANAGER_HPP
