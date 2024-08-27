#include "star/tool/imgui/imgui.hpp"
// order
#include "../data/scene_data.hpp"
#include "hierarchy.hpp"

void Hierarchy::draw(SceneData *scene) {
    ImGui::Begin("Hierarchy");
    for (auto &[k, v] : scene->getFolders()) {
        ImGuiTreeNodeFlags node_flags = ImGuiTreeNodeFlags_SpanAvailWidth;
        if (v.isOpen) {
            node_flags |= ImGuiTreeNodeFlags_DefaultOpen;
        }
        v.isOpen = ImGui::TreeNodeEx(k.c_str(), node_flags);
        if (v.isOpen) {
            for (auto &item : v.entities) {
                if (ImGui::Selectable(item.name.c_str())) {
                    entity = &item;
                }
            }
            ImGui::TreePop();
        }
    }
    ImGui::End();
}
