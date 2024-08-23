#ifndef STAR_OS_HPP
#define STAR_OS_HPP

#ifdef STAR_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

namespace star {
#ifdef STAR_PLATFORM_WIN32
using DLLHandle = HMODULE;
#else
using dllHandle = void *;
#endif

class OS {
    static DLLHandle loadDLL(const char *path);
    static void freeDLL(DLLHandle handle);
};
} // namespace star

#endif // STAR_OS_HPP
