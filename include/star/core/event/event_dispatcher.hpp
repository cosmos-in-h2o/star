#ifndef STAR_EVENT_MANAGER_HPP
#define STAR_EVENT_MANAGER_HPP

#include <shared_mutex>
#include <star/core/event/event.hpp>
#include <star/core/event/input_event.hpp>
#include <star/def.hpp>
#include <star/rtl/hash_map.hpp>
#include <star/rtl/list.hpp>

namespace star {
enum class EventOrder : int64 { BASIC = 0 };

class EventDispatcher {
    struct OrderCallable {
        EventOrder order;
        EventCb callable;
        OrderCallable(EventOrder order, const EventCb &callable);
        OrderCallable(EventOrder order, EventCb &&callable);
        bool operator<(const OrderCallable &other) const;
        bool operator>(const OrderCallable &other) const;
    };

  public:
    EventDispatcher();
    ~EventDispatcher();

    void subscribeEvent(uint64 id, const EventCb &callback,
                        EventOrder order = EventOrder::BASIC);
    void dispatchEvent(uint64 id, const Event &event);
    void removeListener(uint64 id);
    void removeListener(const EventCb &obj);
    void removeListener(uint64 id, const EventCb &callback);

    void subscribeShortEvent(uint64 id, const EventCb &callback,
                             EventOrder order = EventOrder::BASIC);
    void dispatchShortEvent(uint64 id, const Event &event);
    void removeShortListener(uint64 id);
    void removeShortListener(const EventCb &obj);
    void removeShortListener(uint64 id, const EventCb &callback);

    void subscribeEvent(EventType type, const EventCb &callback,
                        EventOrder order = EventOrder::BASIC);
    void dispatchEvent(EventType type, const Event &event);
    void removeListener(EventType type);
    void removeListener(EventType type, const EventCb &callback);

    void subscribeShortEvent(EventType type, const EventCb &callback,
                             EventOrder order = EventOrder::BASIC);
    void dispatchShortEvent(EventType type, const Event &event);
    void removeShortListener(EventType type);
    void removeShortListener(EventType type, const EventCb &callback);


    void sortEvents();

  private:
    HashMap<uint64, List<OrderCallable>> _listeners{};
    HashMap<uint64, List<OrderCallable>> _shortListeners{};
    std::mutex _mutex{};
    std::mutex _mutex2{};
};
} // namespace star

#endif // STAR_EVENT_MANAGER_HPP
