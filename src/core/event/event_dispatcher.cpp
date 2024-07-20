#include <star/core/event/event_dispatcher.hpp>
#include <star/core/io/log.hpp>

namespace star {
HashMap<EventType, List<EventCb>> EventDispatcher::_listeners;
std::shared_mutex EventDispatcher::_mutex;

void EventDispatcher::init() {
    _listeners = HashMap<EventType, List<EventCb>>();
    _shortListeners = HashMap<EventType, List<EventCb>>();
    Log::engineInfo("");
}

void EventDispatcher::subscribeEvent(EventType type, const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    _listeners[type].push_back(callback);
}

void EventDispatcher::dispatchEvent(EventType type, const Event &event) {
    auto it = _listeners.find(type);
    if (it != _listeners.end()) {
        for (const auto &callback : it->second) {
            callback(event);
        }
    }
}

void EventDispatcher::removeListener(EventType type) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    _listeners.erase(type);
}

void EventDispatcher::removeListener(const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    for (auto &[k, v] : _listeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const EventCb &cb) {
                                   return cb.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeListener(EventType type, const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex);
    auto it = _listeners.find(type);
    if (it != _listeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const EventCb &cb) {
                                           return cb.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}

void EventDispatcher::shortSubscribeEvent(EventType type,
                                          const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    _shortListeners[type].push_back(callback);
}

void EventDispatcher::dispatchShortEvent(EventType type, const Event &event) {
    auto it = _shortListeners.find(type);
    if (it != _shortListeners.end()) {
        for (const auto &callback : it->second) {
            callback(event);
        }
    }
    removeShortListener(type);
}

void EventDispatcher::removeShortListener(EventType type) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    _shortListeners.erase(type);
}

void EventDispatcher::removeShortListener(const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    for (auto &[k, v] : _shortListeners) {
        v.erase(std::remove_if(v.begin(), v.end(),
                               [&callback](const EventCb &cb) {
                                   return cb.target_type() ==
                                          callback.target_type();
                               }),
                v.end());
    }
}

void EventDispatcher::removeShortListener(EventType type,
                                          const EventCb &callback) {
    std::unique_lock<std::shared_mutex> lock(_mutex2);
    auto it = _shortListeners.find(type);
    if (it != _shortListeners.end()) {
        auto &callbacks = it->second;
        callbacks.erase(std::remove_if(callbacks.begin(), callbacks.end(),
                                       [&callback](const EventCb &cb) {
                                           return cb.target_type() ==
                                                  callback.target_type();
                                       }),
                        callbacks.end());
    }
}
} // namespace star