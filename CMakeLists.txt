cmake_minimum_required(VERSION 3.26)
project(star)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")
set(CMAKE_CXX_STANDARD 23)

if (WIN32)
    message("Platform: Windows")
    add_definitions(-DSTAR_PLATFORM_WIN32)
elseif (UNIX)
    if (APPLE)
        message("Platform: Macos")
        add_definitions(-DSTAR_PLATFORM_MACOS)
    else ()
        message("Platform: Linux")
        add_definitions(-DSTAR_PLATFORM_LINUX)
    endif ()
else ()
    message("Platform: Unsupported")
endif ()

# 直接放在项目内部的库
include(cmake/imgui.cmake)
add_subdirectory(thirdparty/glad)
add_subdirectory(thirdparty/glfw)
# 外部库引入
add_library(star STATIC)

file(GLOB_RECURSE STAR_SOURCE_FILES
        src/*.cpp
)
target_sources(star
        PRIVATE
        ${STAR_SOURCE_FILES}
)
target_include_directories(star
        PUBLIC
        include
        thirdparty/spdlog/include
        thirdparty/glm/include
        thirdparty/entt/include
        thirdparty/atomic_queue/include
)
target_compile_definitions(star
        PRIVATE
        STAR_ENABLE_ASSERTS
)
target_link_libraries(star
        PUBLIC
        imgui
        glfw
        glad
        opengl32
)
include(cmake/sandbox.cmake)

# test
include(cmake/test.cmake)