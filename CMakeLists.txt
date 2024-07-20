cmake_minimum_required(VERSION 3.26)
project(star)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(thirdparty/glfw)

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
)
target_compile_definitions(star
        PRIVATE
        STAR_DLL_EXPORT
        STAR_ENABLE_ASSERTS
)
target_link_libraries(star
        PUBLIC
        GLFW
)
include(cmake/sandbox.cmake)

# test
include(cmake/test.cmake)