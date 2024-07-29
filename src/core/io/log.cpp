#include <spdlog/sinks/stdout_color_sinks.h>
#include <star/core/io/log.hpp>

namespace star {
std::shared_ptr<spdlog::logger> Log::_sEngineLogger;
std::shared_ptr<spdlog::logger> Log::_sClientLogger;

void Log::init(const std::string &name) {
    spdlog::set_pattern("%^[%T] %n: %v%$");
    _sEngineLogger = spdlog::stdout_color_st("Star");
    Log::engineInfo("The Engine logger is initialized.");
    _sClientLogger = spdlog::stdout_color_st(name);
    Log::engineInfo("The App logger is initialized.");
}

void Log::renameClient(const std::string &name) { return; }
} // namespace star