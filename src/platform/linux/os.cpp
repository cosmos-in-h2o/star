#ifdef STAR_PLATFORM_LINUX

#include "star/platform/os.hpp"
#include "star/core/io/log.hpp"

namespace star {
DLLHandle OS::loadDLL(const char *path) {
    DLLHandle lib = dlopen("myplugin.so", RTLD_LAZY);
    if (!lib) {
        Log::error("Failed to load library: {}", path);
    }
    return lib;
}

void OS::freeDLL(DLLHandle handle) {
    if (dlclose(handle) != 0) {
        Log::error("Failed to unload library. Error: {}", dlerror());
    }
}
} // namespace star

#endif