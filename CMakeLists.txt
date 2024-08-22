cmake_minimum_required(VERSION 3.26)
project(star)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")
set(CMAKE_CXX_STANDARD 20)

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
add_subdirectory(thirdparty/imgui)
add_subdirectory(thirdparty/glad)
add_subdirectory(thirdparty/glfw)
add_subdirectory(thirdparty/yaml-cpp)
# 外部库引入
find_package(TBB CONFIG REQUIRED)

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
        thirdparty/stb/include
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
        yaml-cpp
        TBB::tbb
        TBB::tbbmalloc
        TBB::tbbmalloc_proxy
)

add_executable(StarEditor)
file(GLOB_RECURSE STAR_EDITOR_SOURCE_FILES
        star_editor/*.cpp
)
target_sources(StarEditor
        PRIVATE
        ${STAR_EDITOR_SOURCE_FILES}
)
target_include_directories(StarEditor
        PRIVATE
        star_editor
)
target_link_libraries(StarEditor
        PRIVATE
        star
)

include(cmake/sandbox.cmake)

# test
include(cmake/test.cmake)