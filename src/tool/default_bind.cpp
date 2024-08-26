#include "star/tool/default_bind.hpp"
#include "star/core/math/linear.hpp"
#include "star/ecs/component/camera2d.hpp"
#include "star/ecs/component/sprite.hpp"
#include "star/ecs/component/transform2d.hpp"
#include "star/ecs/component/transform3d.hpp"
#include "star/function/render/color.hpp"
#include "star/tool/class_db.hpp"

#define STAR_GENERATE_BASIC_STRUCT_SERIALIZE(className)                        \
    ClassDB::structSerialize[#className].pushBack(                             \
        [](void *data, ::YAML::Node &node) {                                   \
            auto data_ = static_cast<className *>(data);                       \
            node["value"] = *data_;                                            \
        });

#define STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(className)                      \
    ClassDB::structDeserialize[#className].pushBack(                           \
        [](void *data, const YAML::Node &node) {                               \
            auto data_ = static_cast<className *>(data);                       \
            *data_ = node["value"].as<className>();                            \
        });

namespace star {
void DefaultBind::starBindFunc() {
    starBindFunc_int8_t();
    starBindFunc_int16_t();
    starBindFunc_int32_t();
    starBindFunc_int64_t();
    starBindFunc_uint8_t();
    starBindFunc_uint16_t();
    starBindFunc_uint32_t();
    starBindFunc_uint64_t();
    starBindFunc_float();
    starBindFunc_double();
    starBindFunc_char8();
    starBindFunc_star_String();
    starBindFunc_star_vec2();
    starBindFunc_star_vec3();
    starBindFunc_star_vec4();
    starBindFunc_Components();
}

void DefaultBind::starBindFunc_int8_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(int8_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(int8_t)
    ClassDB::structEditorUI["int8_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<int8_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_S8, data_, 1.0f, &int8_min,
                              &int8_min, "%d");
        });
}

void DefaultBind::starBindFunc_int16_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(int16_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(int16_t)
    ClassDB::structEditorUI["int16_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<int16_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_S16, data_, 1.0f, &int16_min,
                              &int16_min, "%d");
        });
}

void DefaultBind::starBindFunc_int32_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(int32_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(int32_t)
    ClassDB::structEditorUI["int32_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<int32_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_S32, data_, 1.0f, &int32_min,
                              &int32_min, "%d");
        });
}

void DefaultBind::starBindFunc_int64_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(int64_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(int64_t)
    ClassDB::structEditorUI["int8_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<int64_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_S64, data_, 1.0f, &int64_min,
                              &int64_min, "%lld");
        });
}

void DefaultBind::starBindFunc_uint8_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(uint8_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(uint8_t)
    ClassDB::structEditorUI["uint8_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<uint8_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_U8, data_, 1.0f, &uint8_min,
                              &uint8_min, "%u");
        });
}

void DefaultBind::starBindFunc_uint16_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(uint16_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(uint16_t)
    ClassDB::structEditorUI["uint16_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<uint16_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_U16, data_, 1.0f, &uint16_min,
                              &uint16_min, "%u");
        });
}

void DefaultBind::starBindFunc_uint32_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(uint32_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(uint32_t)
    ClassDB::structEditorUI["uint32_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<uint32_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_U32, data_, 1.0f, &uint32_min,
                              &uint32_min, "%u");
        });
}

void DefaultBind::starBindFunc_uint64_t() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(uint64_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(uint64_t)
    ClassDB::structEditorUI["uint64_t"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<uint64_t *>(data);
            ImGui::DragScalar(name, ImGuiDataType_U64, data_, 1.0f, &uint64_min,
                              &uint64_min, "%llu");
        });
}

void DefaultBind::starBindFunc_float() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(float)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(float)
    ClassDB::structEditorUI["float"].pushBack([](const char *name, void *data) {
        auto data_ = static_cast<float *>(data);
        ImGui::DragScalar(name, ImGuiDataType_Float, data_, 0.1f, nullptr,
                          nullptr, "%.3f");
    });
}

void DefaultBind::starBindFunc_double() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(double)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(double)
    ClassDB::structEditorUI["double"].pushBack(
        [](const char *name, void *data) {
            auto data_ = static_cast<float *>(data);
            ImGui::DragScalar(name, ImGuiDataType_Double, data_, 0.01f, nullptr,
                              nullptr, "%.6f");
        });
}

void DefaultBind::starBindFunc_char8() {
    STAR_GENERATE_BASIC_STRUCT_SERIALIZE(int8_t)
    STAR_GENERATE_BASIC_STRUCT_DESERIALIZE(int8_t)
    ClassDB::structEditorUI["char8"].pushBack([](const char *name, void *data) {
        auto data_ = static_cast<char8 *>(data);
        char buffer[2] = "";
        ImGui::InputText(name, buffer, 1);
        *data_ = buffer[0];
    });
}

void DefaultBind::starBindFunc_star_String() {
    ClassDB::structSerialize["star::String"].pushBack(
        [](void *data, ::YAML::Node &node) {
            auto data_ = static_cast<star::String *>(data);
            node["value"] = *data_->c_str();
        });
    ClassDB::structDeserialize["star::String"].pushBack(
        [](void *data, const YAML::Node &node) {
            auto data_ = static_cast<star::String *>(data);
            // 应该有一步从std::string转换为star::String的过程，但目前的star::String就是std::string
            *data_ = node["value"].as<star::String>();
        });
    ClassDB::structEditorUI["star::String"].pushBack(
        [](const char *name, void *data) {
            auto &data_ = *static_cast<String *>(data);
            char buffer[256] = "";
            ImGui::InputText(name, buffer, sizeof(buffer));
            data_ = buffer;
        });
}

void DefaultBind::starBindFunc_star_vec2() {
    ClassDB::structSerialize["star::vec2"].pushBack(
        [](void *data, ::YAML::Node &node) {
            auto &data_ = *static_cast<vec2 *>(data);
            node["x"] = data_.x;
            node["y"] = data_.y;
        });
    ClassDB::structDeserialize["star::vec2"].pushBack(
        [](void *data, const YAML::Node &node) {
            auto &data_ = *static_cast<vec2 *>(data);
            data_.x = node["x"].as<float>();
            data_.y = node["y"].as<float>();
        });
    ClassDB::structEditorUI["star::vec2"].pushBack(
        [](const char *name, void *data) {
            auto data_ = *static_cast<vec2 *>(data);
            ImGui::DragFloat2(name, value_ptr(data_), 0.1f);
        });
}

void DefaultBind::starBindFunc_star_vec3() {
    ClassDB::structSerialize["star::vec3"].pushBack(
        [](void *data, ::YAML::Node &node) {
            auto &data_ = *static_cast<vec3 *>(data);
            node["x"] = data_.x;
            node["y"] = data_.y;
            node["z"] = data_.z;
        });
    ClassDB::structDeserialize["star::vec3"].pushBack(
        [](void *data, const YAML::Node &node) {
            auto &data_ = *static_cast<vec3 *>(data);
            data_.x = node["x"].as<float>();
            data_.y = node["y"].as<float>();
            data_.z = node["z"].as<float>();
        });
    ClassDB::structEditorUI["star::vec3"].pushBack(
        [](const char *name, void *data) {
            auto data_ = *static_cast<vec3 *>(data);
            ImGui::DragFloat3(name, value_ptr(data_), 0.1f);
        });
}

void DefaultBind::starBindFunc_star_vec4() {
    ClassDB::structSerialize["star::vec4"].pushBack(
        [](void *data, ::YAML::Node &node) {
            auto &data_ = *static_cast<vec4 *>(data);
            node["x"] = data_.x;
            node["y"] = data_.y;
            node["z"] = data_.z;
            node["w"] = data_.w;
        });
    ClassDB::structDeserialize["star::vec4"].pushBack(
        [](void *data, const YAML::Node &node) {
            auto &data_ = *static_cast<vec4 *>(data);
            data_.x = node["x"].as<float>();
            data_.y = node["y"].as<float>();
            data_.z = node["z"].as<float>();
            data_.w = node["w"].as<float>();
        });
    ClassDB::structEditorUI["star::vec4"].pushBack(
        [](const char *name, void *data) {
            auto data_ = *static_cast<vec4 *>(data);
            ImGui::DragFloat4(name, value_ptr(data_), 0.1f);
        });
}

void DefaultBind::starBindFunc_Components() {
    Camera2D::starBindFunc();
    Transform2D::starBindFunc();
    Transform3D::starBindFunc();
    Sprite::starBindFunc();
}

void DefaultBind::starBindFunc_Structs() { starBindFunc_Color(); }
} // namespace star