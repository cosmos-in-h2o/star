cmake_minimum_required(VERSION 3.10)
project(GLFW)

add_library(GLFW STATIC
    include/GLFW/glfw3.h
    include/GLFW/glfw3native.h
#    src/glfw_config.h
    src/context.c
    src/init.c
    src/input.c
    src/monitor.c
    src/null_init.c
    src/null_joystick.c
    src/null_monitor.c
    src/null_window.c
    src/platform.c
    src/vulkan.c
    src/window.c
)
target_compile_options(GLFW PRIVATE -w)


if(UNIX AND NOT APPLE)
    target_sources(GLFW PRIVATE
        src/x11_init.c
        src/x11_monitor.c
        src/x11_window.c
        src/xkb_unicode.c
        src/posix_module.c
        src/posix_time.c
        src/posix_thread.c
        src/glx_context.c
        src/egl_context.c
        src/osmesa_context.c
        src/linux_joystick.c
    )
    target_compile_definitions(GLFW PRIVATE _GLFW_X11)
elseif(APPLE)
    target_sources(GLFW PRIVATE
        src/cocoa_init.m
        src/cocoa_monitor.m
        src/cocoa_window.m
        src/cocoa_joystick.m
        src/cocoa_time.c
        src/nsgl_context.m
        src/posix_thread.c
        src/posix_module.c
        src/osmesa_context.c
        src/egl_context.c
    )
    target_compile_definitions(GLFW PRIVATE _GLFW_COCOA)
elseif(WIN32)
    target_sources(GLFW PRIVATE
        src/win32_init.c
        src/win32_joystick.c
        src/win32_module.c
        src/win32_monitor.c
        src/win32_time.c
        src/win32_thread.c
        src/win32_window.c
        src/wgl_context.c
        src/egl_context.c
        src/osmesa_context.c
    )
    target_compile_definitions(GLFW PRIVATE _GLFW_WIN32 _CRT_SECURE_NO_WARNINGS)
endif()

target_include_directories(GLFW PUBLIC include)