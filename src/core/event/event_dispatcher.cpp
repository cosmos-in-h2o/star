#include <star/core/event/event_dispatcher.hpp>
#include <star/core/io/log.hpp>
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

HashMap<uint64, List<EventDispatcher::OrderCallable>>
    EventDispatcher::_listeners;
HashMap<uint64, List<EventDispatcher::OrderCallable>>
    EventDispatcher::_shortListeners;
std::shared_mutex EventDispatcher::_mutex;
std::shared_mutex EventDispatcher::_mutex2;

void EventDispatcher::init() {
    _listeners = HashMap<uint64, List<EventDispatcher::OrderCallable>>();
    _shortListeners = HashMap<uint64, List<EventDispatcher::OrderCallable>>();
    Log::engineInfo("Event dispatcher is initialized.");
}

void EventDispatcher::subscribeEvent(EventType type, const EventCb &callback,
                                     EventOrder order) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    _listeners[static_cast<uint64>(type)].emplace_back(order, callback);
}

void EventDispatcher::dispatchEvent(EventType type, const Event &event) {
    auto it = _listeners.find(static_cast<uint64>(type));
    if (it != _listeners.end()) {
        for (const auto &obj : it->second) {
            obj.callable(event);
        }
    }
}

void EventDispatcher::removeListener(EventType type) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    _listeners.erase(static_cast<uint64>(type));
}

void EventDispatcher::removeListener(const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    for (auto &[k, v] : _listeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const OrderCallable &obj) {
                                   return obj.callable.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeListener(EventType type, const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    auto it = _listeners.find(static_cast<uint64>(type));
    if (it != _listeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const OrderCallable &obj) {
                                           return obj.callable.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}

void EventDispatcher::shortSubscribeEvent(EventType type,
                                          const EventCb &callback,
                                          EventOrder order) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    _shortListeners[static_cast<uint64>(type)].emplace_back(order, callback);
}

void EventDispatcher::dispatchShortEvent(EventType type, const Event &event) {
    auto it = _shortListeners.find(static_cast<uint64>(type));
    if (it != _shortListeners.end()) {
        for (const auto &obj : it->second) {
            obj.callable(event);
        }
    }
    removeShortListener(type);
}

void EventDispatcher::removeShortListener(EventType type) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    _shortListeners.erase(static_cast<uint64>(type));
}

void EventDispatcher::removeShortListener(const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    for (auto &[k, v] : _shortListeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const OrderCallable &obj) {
                                   return obj.callable.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeShortListener(EventType type,
                                          const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    auto it = _shortListeners.find(static_cast<uint64>(type));
    if (it != _shortListeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const OrderCallable &obj) {
                                           return obj.callable.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}

void EventDispatcher::sortEvents() {
    for (auto &pair : _listeners){
        sort(pair.second.begin(), pair.second.end(),
             [](const OrderCallable &a, const OrderCallable &b) {
               return a.order > b.order;
             });
    }
    for (auto &pair : _shortListeners){
        sort(pair.second.begin(), pair.second.end(),
             [](const OrderCallable &a, const OrderCallable &b) {
               return a.order > b.order;
             });
    }
}
} // namespace star
