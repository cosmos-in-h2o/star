#include <star/core/io/log.hpp>
#include <spdlog/sinks/stdout_color_sinks.h>

namespace star {
std::shared_ptr<spdlog::logger> Log::_sEngineLogger;
std::shared_ptr<spdlog::logger> Log::_sClientLogger;

void Log::init(const String&name) {
    spdlog::set_pattern("%^[%T] %n: %v%$");
    _sEngineLogger = spdlog::stdout_color_st("Star");
    Log::engineInfo("The Engine logger is initialized.");
    _sClientLogger = spdlog::stdout_color_st(name);
    Log::engineInfo("The App logger is initialized.");
}

} // namespace star