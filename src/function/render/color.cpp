#include "star/function/render/color.hpp"
#include "star/tool/class_db.hpp"

namespace star {
void starBindFunc_Color() {
    ClassDB::structSerialize["star::Color"].pushBack(
        [](void *data, YAML::Node &node) {
            auto &data_ = *static_cast<vec4 *>(data);
            node["r"] = data_.r;
            node["g"] = data_.g;
            node["b"] = data_.b;
            node["a"] = data_.a;
        });
    ClassDB::structDeserialize["star::Color"].pushBack(
        [](void *data, const YAML::Node &node) {
            auto &data_ = *static_cast<vec4 *>(data);
            data_.r = node["r"].as<float>();
            data_.g = node["g"].as<float>();
            data_.b = node["b"].as<float>();
            data_.a = node["a"].as<float>();
        });
    ClassDB::structEditorUI["star::Color"].pushBack(
        [](const char *name, void *data) {
            auto data_ = *static_cast<vec4 *>(data);
            ImGui::ColorEdit4(name, value_ptr(data_));
        });
}
} // namespace star
