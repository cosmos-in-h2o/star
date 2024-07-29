// #include <glad/glad.h>
//// order
// #include <GLFW/glfw3.h>
// #include <imgui.h>
// #include <imgui_impl_glfw.h>
// #include <imgui_impl_opengl3.h>
//
// #include <functional>
// #include <iostream>
// #include <unordered_map>
//
// #include "star/core/io/log.hpp"
// #include <star/core/event/event.hpp>
// #include <star/core/event/event_dispatcher.hpp>
//
// void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
//     glViewport(0, 0, width, height);
// }
//
// GLFWwindow *window = nullptr;
//
// void init(int,const star::Event&) {
//     // Initialize GLFW
//     if (!glfwInit()) {
//         std::cerr << "Failed to initialize GLFW" << std::endl;
//     }
//
//     // Set OpenGL version
//     glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//     glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//     glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//     // Create window
//     window = glfwCreateWindow(800, 600, "ImGui Test", NULL, NULL);
//     if (!window) {
//         std::cerr << "Failed to create GLFW window" << std::endl;
//         glfwTerminate();
//     }
//     glfwMakeContextCurrent(window);
//     glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//     // Initialize GLAD
//     if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
//         std::cerr << "Failed to initialize GLAD" << std::endl;
//     }
//
//     // Setup ImGui
//     IMGUI_CHECKVERSION();
//     ImGui::CreateContext();
//     ImGuiIO &io = ImGui::GetIO();
//     (void)io;
//     ImGui::StyleColorsDark();
//     ImGui_ImplGlfw_InitForOpenGL(window, true);
//     ImGui_ImplOpenGL3_Init("#version 330");
// }
// void update(const star::Event&) {
//     glfwPollEvents();
//
//     // Start ImGui frame
//     ImGui_ImplOpenGL3_NewFrame();
//     ImGui_ImplGlfw_NewFrame();
//     ImGui::NewFrame();
//
//     // Create ImGui window
//     ImGui::Begin("Hello, ImGui!");
//     ImGui::Text("This is a test window to verify ImGui is working.");
//     if (ImGui::Button("Close")) {
//         glfwSetWindowShouldClose(window, true);
//     }
//     ImGui::End();
//
//     // Render
//     ImGui::Render();
//     int display_w, display_h;
//     glfwGetFramebufferSize(window, &display_w, &display_h);
//     glViewport(0, 0, display_w, display_h);
//     glClearColor(0.45f, 0.55f, 0.60f, 1.00f);
//     glClear(GL_COLOR_BUFFER_BIT);
//     ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
//
//     glfwSwapBuffers(window);
// }
// void destroy(const star::Event&) {
//     // Cleanup
//     ImGui_ImplOpenGL3_Shutdown();
//     ImGui_ImplGlfw_Shutdown();
//     ImGui::DestroyContext();
//
//     glfwDestroyWindow(window);
//     glfwTerminate();
// }
//
// int main() {
//     star::Log::init("sandbox");
//     star::EventDispatcher::init();
//     star::EventDispatcher::subscribeEvent(star::EventType::CUSTOM_EVENT_1,std::bind(init,1,std::placeholders::_1));
//     star::EventDispatcher::subscribeEvent(star::EventType::CUSTOM_EVENT_2,&update);
//     star::EventDispatcher::subscribeEvent(star::EventType::CUSTOM_EVENT_3,&destroy);
//     star::Event emptyEvent;
//
//     star::EventDispatcher::dispatchEvent(star::EventType::CUSTOM_EVENT_1,emptyEvent);
//     // Main loop
//     while (!glfwWindowShouldClose(window)) {
//         star::EventDispatcher::dispatchEvent(star::EventType::CUSTOM_EVENT_2,emptyEvent);
//     }
//     star::EventDispatcher::dispatchEvent(star::EventType::CUSTOM_EVENT_3,emptyEvent);
//     return 0;
// }
//
#include <star/core/application.hpp>
#include <star/core/math/linear.hpp>
int main() {
    auto app = new star::Application("sandbox", 1280, 640);
    return app->run();
}