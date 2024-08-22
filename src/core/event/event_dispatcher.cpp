#include "star/core/event/event_dispatcher.hpp"
#include "star/core/io/log.hpp"
#include <utility>

namespace star {
EventDispatcher::EventDispatcher() {
    Log::trace("Event dispatcher is initialized.");
}

EventDispatcher::~EventDispatcher() = default;

void EventDispatcher::subscribeEvent(uint64_t id, const EventCb &callback,
                                     EventOrder order) {
    _listeners[id].insert({order, callback});
}

void EventDispatcher::dispatchEvent(uint64_t id, const Event &event) {
    auto it = _listeners.find(id);
    if (it != _listeners.end()) {
        auto order = it->second.begin()->first;
        for (auto &[k, v] : it->second) {
            if (k != order) {
                _taskGroup.wait();
                order = k;
            }
            _taskGroup.run([&]() { v(event); });
        }
        _taskGroup.wait();
    }
}

void EventDispatcher::removeListener(uint64_t id) {
    auto it = _listeners.find(id);
    if (it != _listeners.end()) {
        _listeners.unsafe_erase(it);
    }
}

void EventDispatcher::subscribeShortEvent(uint64_t id, const EventCb &callback,
                                          EventOrder order) {
    _listeners[id].insert({order, callback});
}

void EventDispatcher::dispatchShortEvent(uint64_t id, const Event &event) {
    auto it = _shortListeners.find(id);
    if (it != _shortListeners.end()) {
        auto order = it->second.begin()->first;
        for (auto &i : it->second) {
            _taskGroup.run([&]() { i.second(event); });
            if (i.first != order) {
                _taskGroup.wait();
                order = i.first;
            }
        }
    }
    removeShortListener(id);
}

void EventDispatcher::removeShortListener(uint64_t id) {
    auto it = _shortListeners.find(id);
    if (it != _shortListeners.end()) {
        _shortListeners.unsafe_erase(it);
    }
}

void EventDispatcher::subscribeEvent(EventType type, const EventCb &callback,
                                     EventOrder order) {
    this->subscribeEvent(static_cast<uint64_t>(type), callback, order);
}

void EventDispatcher::dispatchEvent(EventType type, const Event &event) {
    this->dispatchEvent(static_cast<uint64_t>(type), event);
}

void EventDispatcher::removeListener(EventType type) {
    this->removeListener(static_cast<uint64_t>(type));
}

void EventDispatcher::subscribeShortEvent(EventType type,
                                          const EventCb &callback,
                                          EventOrder order) {
    this->subscribeShortEvent(static_cast<uint64_t>(type), callback, order);
}

void EventDispatcher::dispatchShortEvent(EventType type, const Event &event) {
    this->dispatchShortEvent(static_cast<uint64_t>(type), event);
}

void EventDispatcher::removeShortListener(EventType type) {
    this->removeShortListener(static_cast<uint64_t>(type));
}
} // namespace star
