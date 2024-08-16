#include "star/core/event/event_dispatcher.hpp"
#include "star/core/io/log.hpp"
#include <utility>

namespace star {
EventDispatcher::OrderCallable::OrderCallable(EventOrder order,
                                              const EventCb &callable)
    : order(order), callable(callable) {}

EventDispatcher::OrderCallable::OrderCallable(EventOrder order,
                                              EventCb &&callable)
    : order(order), callable(std::move(callable)) {}

bool EventDispatcher::OrderCallable::operator<(
    const EventDispatcher::OrderCallable &other) const {
    return this->order < other.order;
}

bool EventDispatcher::OrderCallable::operator>(
    const EventDispatcher::OrderCallable &other) const {
    return this->order > other.order;
}

EventDispatcher::EventDispatcher() {
    this->_listeners = HashMap<uint64, List<EventDispatcher::OrderCallable>>();
    this->_shortListeners =
        HashMap<uint64, List<EventDispatcher::OrderCallable>>();
    Log::trace("Event dispatcher is initialized.");
}

EventDispatcher::~EventDispatcher() = default;

void EventDispatcher::subscribeEvent(uint64 id, const EventCb &callback,
                                     EventOrder order) {
    std::unique_lock<std::mutex> lock(_mutex);
    this->_listeners[id].emplace_back(order, callback);
}

void EventDispatcher::dispatchEvent(uint64 id, const Event &event) {
    auto it = this->_listeners.find(id);
    if (it != this->_listeners.end()) {
        for (const auto &obj : it->second) {
            obj.callable(event);
        }
    }
}

void EventDispatcher::removeListener(uint64 id) {
    std::unique_lock<std::mutex> lock(_mutex);
    this->_listeners.erase(id);
}

void EventDispatcher::removeListener(const EventCb &callback) {
    std::unique_lock<std::mutex> lock(_mutex);
    for (auto &[k, v] : this->_listeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const OrderCallable &obj) {
                                   return obj.callable.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeListener(uint64 id, const EventCb &callback) {
    std::unique_lock<std::mutex> lock(_mutex);
    auto it = this->_listeners.find(id);
    if (it != this->_listeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const OrderCallable &obj) {
                                           return obj.callable.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}

void EventDispatcher::subscribeShortEvent(uint64 id, const EventCb &callback,
                                          EventOrder order) {
    std::unique_lock<std::mutex> lock(_mutex2);
    this->_shortListeners[id].emplace_back(order, callback);
}

void EventDispatcher::dispatchShortEvent(uint64 id, const Event &event) {
    auto it = this->_shortListeners.find(id);
    if (it != this->_shortListeners.end()) {
        for (const auto &obj : it->second) {
            obj.callable(event);
        }
    }
    removeShortListener(id);
}

void EventDispatcher::removeShortListener(uint64 id) {
    std::unique_lock<std::mutex> lock(_mutex2);
    this->_shortListeners.erase(id);
}

void EventDispatcher::removeShortListener(const EventCb &callback) {
    std::unique_lock<std::mutex> lock(_mutex2);
    for (auto &[k, v] : this->_shortListeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const OrderCallable &obj) {
                                   return obj.callable.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeShortListener(uint64 id, const EventCb &callback) {
    std::unique_lock<std::mutex> lock(_mutex2);
    auto it = this->_shortListeners.find(id);
    if (it != this->_shortListeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const OrderCallable &obj) {
                                           return obj.callable.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}

void EventDispatcher::subscribeEvent(EventType type, const EventCb &callback,
                                     EventOrder order) {
    this->subscribeEvent(static_cast<uint64>(type), callback, order);
}

void EventDispatcher::dispatchEvent(EventType type, const Event &event) {
    this->dispatchEvent(static_cast<uint64>(type), event);
}

void EventDispatcher::removeListener(EventType type) {
    this->removeListener(static_cast<uint64>(type));
}

void EventDispatcher::removeListener(EventType type, const EventCb &callback) {
    this->removeListener(static_cast<uint64>(type), callback);
}

void EventDispatcher::subscribeShortEvent(EventType type,
                                          const EventCb &callback,
                                          EventOrder order) {
    this->subscribeShortEvent(static_cast<uint64>(type), callback, order);
}

void EventDispatcher::dispatchShortEvent(EventType type, const Event &event) {
    this->dispatchShortEvent(static_cast<uint64>(type), event);
}

void EventDispatcher::removeShortListener(EventType type) {
    this->removeShortListener(static_cast<uint64>(type));
}

void EventDispatcher::removeShortListener(EventType type,
                                          const EventCb &callback) {
    this->removeShortListener(static_cast<uint64>(type), callback);
}

void EventDispatcher::sortEvents() {
    for (auto &pair : _listeners) {
        sort(pair.second.begin(), pair.second.end(),
             [](const OrderCallable &a, const OrderCallable &b) {
                 return a.order > b.order;
             });
    }
    for (auto &pair : _shortListeners) {
        sort(pair.second.begin(), pair.second.end(),
             [](const OrderCallable &a, const OrderCallable &b) {
                 return a.order > b.order;
             });
    }
}
} // namespace star
