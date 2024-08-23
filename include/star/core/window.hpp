#ifndef STAR_WINDOW_HPP
#define STAR_WINDOW_HPP

#include "star/core/event/event_dispatcher.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/function/render/color.hpp"

namespace star {
class Window {
  public:
    virtual ~Window();

    virtual int32_t getWidth() const = 0;
    virtual int32_t getHeight() const = 0;
    virtual void *getNativeWindow() const = 0;
    virtual bool shouldClose() const = 0;
    virtual void clear() = 0;
    virtual void setBGColor(const Color &color) = 0;
    virtual void registerDispatch(EventDispatcher &dispatcher) = 0;

    virtual Camera *getCamera() = 0;
    virtual void setCamera(Camera *camera) = 0;

    virtual uint32_t VSync() = 0;
    virtual void setVSync(int level) = 0;
};
} // namespace star

#endif // STAR_WINDOW_HPP
