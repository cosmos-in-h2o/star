add_library(imgui STATIC)
target_sources(imgui PRIVATE
        thirdparty/imgui/imgui.cpp
        thirdparty/imgui/imgui_demo.cpp
        thirdparty/imgui/imgui_draw.cpp
        thirdparty/imgui/imgui_widgets.cpp
        thirdparty/imgui/imgui_tables.cpp
#        thirdparty/imgui/backends/imgui_impl_glfw.cpp
#        thirdparty/imgui/backends/imgui_impl_opengl3.cpp
)

target_include_directories(imgui PUBLIC
        thirdparty/imgui
        thirdparty/imgui/backends
)