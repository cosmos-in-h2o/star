#ifndef STAR_LOG_HPP
#define STAR_LOG_HPP

#include <spdlog/spdlog.h>
#include <star/def.hpp>
#include <memory>
#include <string>

namespace star {
class STAR_API Log {
  public:
    static void init(const std::string &name);
    static void renameClient(const std::string &name);

    template <typename... Ts>
    static void info(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sClientLogger->info(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void warn(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sClientLogger->warn(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void error(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sClientLogger->error(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void engineInfo(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sEngineLogger->info(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void engineWarn(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sEngineLogger->warn(fmt, std::forward<Ts>(msg)...);
    }
    template <typename... Ts>
    static void engineError(spdlog::format_string_t<Ts...> fmt, Ts &&...msg) {
        _sEngineLogger->error(fmt, std::forward<Ts>(msg)...);
    }

  private:
    static std::shared_ptr<spdlog::logger> _sEngineLogger;
    static std::shared_ptr<spdlog::logger> _sClientLogger;
};

enum class LogType{
    INFO,
    WARN,
    ERROR_
};
enum class LoggerType{
    CLIENT,
    ENGINE
};
} // namespace star

#endif // STAR_LOG_HPP
