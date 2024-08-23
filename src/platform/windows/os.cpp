#ifdef STAR_PLATFORM_WIN32

#include "star/platform/os.hpp"
#include "star/core/io/log.hpp"

namespace star {
DLLHandle OS::loadDLL(const char *path) {
    HMODULE lib = LoadLibrary(path);
    if (!lib) {
        Log::error("Failed to load library: {}", path);
    }
    return lib;
}

void OS::freeDLL(DLLHandle handle) {
    if (!FreeLibrary(handle)) {
        Log::error("Failed to unload library. Error code: {}", GetLastError());
    }
}
} // namespace star

#endif
