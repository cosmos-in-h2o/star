#ifndef STAR_ERROR_LIST_HPP
#define STAR_ERROR_LIST_HPP
#include <star/core/io/log.hpp>
#include <star/def.hpp>
#include <star/rtl/string.hpp>
#include <star/rtl/string_view.hpp>

namespace star {
enum class ErrorType {
    INITIALIZATION,
    SHADER_COMPILE,
    SHADER_LINK,
    NULLPTR_ARG,
    GET_UNIFORM_LOCATION
};

struct Error {
    ErrorType type{};
    String file{};
    uint32 line{};
};

// 用于处理错误
class ErrorHandler {
  public:
    static void reportError(const Error&error,const String& obj);
    static void reportWarn(const Error&error,const String& obj);
};

} // namespace star

#define makeError(type)                                                        \
    ::star::Error { type, __FILE__, __LINE__ }

#define STAR_INITIALIZATION_ERROR_DESCRIPTION "Failed to init {} in {} at {} line"
#define STAR_SHADER_COMPILE_ERROR_DESCRIPTION "Failed to compile shader: {} in {} at {} line"
#define STAR_SHADER_LINK_ERROR_DESCRIPTION "Failed to link shader: {} in {} at {} line"

#endif // STAR_ERROR_LIST_HPP
