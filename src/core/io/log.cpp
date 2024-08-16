#include <spdlog/sinks/stdout_color_sinks.h>
#include <star/core/io/log.hpp>

namespace star {
std::shared_ptr<spdlog::logger> Log::_sLogger{};

void Log::init(const std::string &name) {
    spdlog::set_pattern("%^%H:%M:%S:%e [%1!L] - %v%$");
    _sLogger = spdlog::stdout_color_st(name);
    setLevel(LogLevel::TRACE);
    Log::trace("The logger is initialized.");
}

void Log::setLevel(LogLevel level) {
    _sLogger->set_level(static_cast<spdlog::level::level_enum>(level));
}
} // namespace star