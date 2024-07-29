cmake_minimum_required(VERSION 3.26)
project(star)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")

add_subdirectory(thirdparty/glfw)
add_subdirectory(thirdparty/glad)
include(cmake/imgui.cmake)

add_library(star SHARED)
file(GLOB_RECURSE STAR_SOURCE_FILES
        src/*.cpp
)
target_sources(star
        PRIVATE
        ${STAR_SOURCE_FILES}
        src/core/window.cpp
)
target_include_directories(star
        PUBLIC
        include
        thirdparty/spdlog/include
        thirdparty/glfw/include
        thirdparty/glm/include
)
target_compile_definitions(star
        PRIVATE
        STAR_DLL_EXPORT
        STAR_ENABLE_ASSERTS
)
target_link_libraries(star
        PUBLIC
        Glad
        glfw
        imgui
)
include(cmake/sandbox.cmake)

# test
include(cmake/test.cmake)
