cmake_minimum_required(VERSION 3.18)

add_library(glad STATIC)
target_include_directories(glad
        PUBLIC
        include
)
target_sources(glad
        PRIVATE
        src/glad.c
)