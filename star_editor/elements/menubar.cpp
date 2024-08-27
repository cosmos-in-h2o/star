#include "star/tool/imgui/imgui.hpp"
// order
#include "menubar.hpp"

void menubar() {
    if (ImGui::BeginMenu("window")) {
        if (ImGui::MenuItem("退出"))
            star::Log::trace("exit");
        ImGui::EndMenu();
    }
}