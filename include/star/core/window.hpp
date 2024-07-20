#ifndef STAR_WINDOW_HPP
#define STAR_WINDOW_HPP

#include <star/core/event/event.hpp>
#include <star/def.hpp>
#include <star/rtl/string.hpp>

namespace star {
class Window {
  public:
    virtual ~Window();

    virtual void onUpdate() = 0;
    virtual void shutDown() = 0;

    virtual void registerEvents()=0;

    [[nodiscard]] virtual int32 getWidth() const = 0;
    [[nodiscard]] virtual int32 getHeight() const = 0;

    [[nodiscard]] virtual void *getNativeWindow() const = 0;
};
} // namespace star

#endif // STAR_WINDOW_HPP