#include "star/tool/imgui/imgui.hpp"
// order
#include "data/scene_data.hpp"
#include "detail.hpp"
#include "star/tool/class_db.hpp"

void Detail::draw(EntityData *entity) {
    ImGui::Begin("Inspector");
    if (entity) {
        entity->name.copy(_entityNameInputBuffer,
                          entity->name.size()); // 复制字符串内容
        _entityNameInputBuffer[entity->name.size()] = '\0';
        if (ImGui::InputText("Entity name", _entityNameInputBuffer,
                             IM_ARRAYSIZE(_entityNameInputBuffer))) {
            entity->name = _entityNameInputBuffer;
        }
        ImGui::Separator();
        for (auto &[k, v] : entity->components) {
            ImGuiTreeNodeFlags node_flags = ImGuiTreeNodeFlags_SpanAvailWidth;
            if (v.isOpen) {
                node_flags |= ImGuiTreeNodeFlags_DefaultOpen;
            }
            v.isOpen = ImGui::TreeNodeEx(k.c_str(), node_flags);
            if (v.isOpen) {
                star::ClassDB::componentEditorUI[k](v.component);
                ImGui::TreePop();
            }
        }
    }
    ImGui::End();
}