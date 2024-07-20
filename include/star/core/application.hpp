#ifndef STAR_APPLICATION_HPP
#define STAR_APPLICATION_HPP

#include <star/core/event/event_dispatcher.hpp>
#include <star/def.hpp>
#include <star/platform/windows/windows_window.hpp>

namespace star {
class STAR_API Application {
  public:
    Application(const String &name, int32 width, int32 height);
    virtual ~Application();
    int run();

  private:
    bool _isRun;
    Window *_window;
};
} // namespace star

#endif // STAR_APPLICATION_HPP
