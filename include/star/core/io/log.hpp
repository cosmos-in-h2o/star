#ifndef STAR_LOG_HPP
#define STAR_LOG_HPP

#include <spdlog/spdlog.h>
#include <star/def.hpp>
#include <memory>
#include <string>

namespace star {
enum class LogLevel:int {
    TRACE,
    INFO,
    DEBUG,
    WARN,
    ERROR_
};

class Log {
  public:
    static void init(const std::string &name);
    static void setLevel(LogLevel level);

    template <typename... Ts>
    static void trace(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sLogger->trace(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void info(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sLogger->info(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void debug(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sLogger->debug(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void warn(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sLogger->warn(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void error(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sLogger->error(fmt, std::forward<Ts>(msg)...);
    }

  private:
    static std::shared_ptr<spdlog::logger> _sLogger;
};
} // namespace star

#endif // STAR_LOG_HPP
