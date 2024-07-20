#ifndef STAR_LOG_HPP
#define STAR_LOG_HPP

#include "star/rtl/string.hpp"
#include <spdlog/spdlog.h>
#include <star/def.hpp>
#include <star/rtl/unique_ptr.hpp>

namespace star {
class STAR_API Log {
  public:
    static void init(const String& client);
    template <typename... Ts> static void info(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sClientLogger->info(fmt,std::forward<Ts>(msg)...);
    }
    template <typename ...Ts> static void warn(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sClientLogger->warn(fmt,std::forward<Ts>(msg)...);
    }
    template <typename ...Ts> static void error(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sClientLogger->error(fmt,std::forward<Ts>(msg)...);
    }
    template <typename ...Ts> static void engineInfo(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sEngineLogger->info(fmt,std::forward<Ts>(msg)...);
    }
    template <typename ...Ts> static void engineWarn(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sEngineLogger->warn(fmt,std::forward<Ts>(msg)...);
    }
    template <typename ...Ts> static void engineError(spdlog::format_string_t<Ts...> fmt,Ts &&...msg) {
        _sEngineLogger->error(fmt,std::forward<Ts>(msg)...);
    }

  private:
    static std::shared_ptr<spdlog::logger> _sEngineLogger;
    static std::shared_ptr<spdlog::logger> _sClientLogger;
};
} // namespace star

#endif // STAR_LOG_HPP
