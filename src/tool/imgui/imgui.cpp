#include "star/tool/imgui/imgui.hpp"

namespace star {
GLFWwindow *ImGUI::_window;

void ImGUI::init(Window *window) {
    _window = (GLFWwindow *)window->getNativeWindow();

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.Fonts->AddFontFromFileTTF("C:/Windows/Fonts/msyh.ttc", 22, nullptr,
                                 io.Fonts->GetGlyphRangesChineseFull());
    ImGui_ImplGlfw_InitForOpenGL(_window, true);

    ImGui_ImplOpenGL3_Init("#version 460");
    ImGui::StyleColorsClassic();
}

void ImGUI::close() {

    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();
}

void ImGUI::begin() {
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();

}

void ImGUI::end() {
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}
} // namespace star