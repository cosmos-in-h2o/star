#include <star/core/error/error.hpp>
#include "star/core/game.hpp"

namespace star {
void ErrorHandler::reportError(const Error &error, const String &obj) {
    switch (error.type) {
    case ErrorType::INITIALIZATION:
        Log::error(STAR_INITIALIZATION_ERROR_DESCRIPTION, obj,error.file,error.line);
    default:
        break;
    }
}
void ErrorHandler::reportWarn(const Error &error, const String &obj) {
    switch (error.type) {
    case ErrorType::NULLPTR_ARG:
        Log::warn(STAR_INITIALIZATION_ERROR_DESCRIPTION, obj,error.file,error.line);
    default:
        break;
    }
}
} // namespace star