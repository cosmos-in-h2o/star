#ifndef STAR_WINDOW_HPP
#define STAR_WINDOW_HPP

#include "star/core/event/event_dispatcher.hpp"
#include "star/function/render/color.hpp"

namespace star {
class Window {
  public:
    virtual ~Window();

    virtual int32 getWidth() const = 0;
    virtual int32 getHeight() const = 0;
    virtual void *getNativeWindow() const = 0;
    virtual bool shouldClose() const = 0;
    virtual void clear() = 0;
    virtual void setBGColor(const Color& color) = 0;
    virtual void registerDispatch(EventDispatcher &dispatcher) = 0;
};
} // namespace star

#endif // STAR_WINDOW_HPP
