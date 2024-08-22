#ifndef STAR_TIME_STEP_HPP
#define STAR_TIME_STEP_HPP

#include <GLFW/glfw3.h>
#include "star/core/window.hpp"

namespace star {
class TimeStep {
  public:
    static void init(Window*window);
    static void begin();
    static void end();
    static void setTargetFPS(int64_t fps);
    static double getTimeStep();
    static int64_t getFPS();

  private:
    static Window* _window;
    static double _bTime;
    static double _eTime;
    static double _timeStep;
    static int64_t _targetFPS;
};
}

#endif // STAR_TIME_STEP_HPP