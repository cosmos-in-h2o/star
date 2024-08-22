#ifndef STAR_EVENT_MANAGER_HPP
#define STAR_EVENT_MANAGER_HPP

#include "star/core/event/event.hpp"
#include "star/core/event/input_event.hpp"
#include "star/def.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/list.hpp"
#include "star/rtl/map.hpp"
#include <mutex>
#include <tbb/tbb.h>

namespace star {
enum class EventOrder : int64_t { UNKNOWN = 0,BASIC=0xff };

class EventDispatcher {
  public:
    EventDispatcher();
    ~EventDispatcher();

    void subscribeEvent(uint64_t id, const EventCb &callback,
                        EventOrder order = EventOrder::BASIC);
    void dispatchEvent(uint64_t id, const Event &event);
    void removeListener(uint64_t id);

    void subscribeShortEvent(uint64_t id, const EventCb &callback,
                             EventOrder order = EventOrder::BASIC);
    void dispatchShortEvent(uint64_t id, const Event &event);
    void removeShortListener(uint64_t id);

    void subscribeEvent(EventType type, const EventCb &callback,
                        EventOrder order = EventOrder::BASIC);
    void dispatchEvent(EventType type, const Event &event);
    void removeListener(EventType type);

    void subscribeShortEvent(EventType type, const EventCb &callback,
                             EventOrder order = EventOrder::BASIC);
    void dispatchShortEvent(EventType type, const Event &event);
    void removeShortListener(EventType type);

  private:
    SafeHashMap<uint64_t, SafeMultimap<EventOrder, EventCb>> _listeners{};
    SafeHashMap<uint64_t, SafeMultimap<EventOrder, EventCb>> _shortListeners{};
    tbb::task_group _taskGroup{};
};
} // namespace star

#endif // STAR_EVENT_MANAGER_HPP
