#ifndef STAR_EVENT_HPP
#define STAR_EVENT_HPP

#include <functional>
#include <star/def.hpp>

#define REGISTER_CALLBACK_FN(type) using type##Cb = std::function<void(const type&)>;


namespace star {
    enum EventType : int64 {
        UNKNOWN = 0,
        WINDOW_CLOSE,
        WINDOW_RESIZE,
        WINDOW_FOCUS,
        WINDOW_LOST_FOCUS,
        WINDOW_MOVED,
        APP_TICK,
        APP_UPDATE,
        APP_RENDER,
        KEY_PRESSED,
        KEY_RELEASED,
        KEY_TYPED,
        MOUSE_BUTTON_PRESSED,
        MOUSE_BUTTON_RELEASED,
        MOUSE_SHIFTED,
        MOUSE_SCROLLED
    };

    class STAR_API Event {
    public:
        Event() = default;

        virtual ~Event() = default;

        virtual EventType getType() = 0;
    };

    REGISTER_CALLBACK_FN(Event)
} // namespace star

#endif // STAR_EVENT_HPP
