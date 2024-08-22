#include "star/core/time_step.hpp"
#include "star/core/error/error.hpp"
#include <chrono>

namespace star {
Window *TimeStep::_window{};
double TimeStep::_bTime{};
double TimeStep::_eTime{};
double TimeStep::_timeStep{1.0 / 60.0};
int64_t TimeStep::_targetFPS{-1};

void TimeStep::init(star::Window *window) {
    if (!window) {
        ErrorHandler::reportError(makeError(ErrorType::NULLPTR_ARG), "window");
        return;
    }
    _window = window;
}

void TimeStep::begin() { _bTime = glfwGetTime(); }

void TimeStep::end() {
    _eTime = glfwGetTime();
    _timeStep = _eTime - _bTime;

    if (_targetFPS > 0) {
        auto targetTS = (1.0 / double(_targetFPS));
        // 如果实际刷新事件小于目标刷新时间并且没有开垂直同步则向目标帧数接近
        if (_window && _window->VSync() == 0 && _timeStep < targetTS) {
            std::this_thread::sleep_for(std::chrono::milliseconds(
                int64_t(1000.0 * (targetTS - _timeStep))));
            // 重新计算timeStep以修正可能的延迟误差
            _eTime = glfwGetTime();
            _timeStep = _eTime - _bTime;
        }
    }
}

void TimeStep::setTargetFPS(int64_t fps) { _targetFPS = fps; }

double TimeStep::getTimeStep() { return _timeStep; }

int64_t TimeStep::getFPS() { return int64_t(1.0 / _timeStep); }
} // namespace star