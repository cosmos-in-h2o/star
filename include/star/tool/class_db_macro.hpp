#ifndef STAR_CLASS_DB_MACRO_HPP
#define STAR_CLASS_DB_MACRO_HPP

#include <imgui.h>

#define STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_PROPERTY(                       \
    className, propertyType, propertyName)                                     \
    ::star::ClassDB::componentSerialize[#className].pushBack(                  \
        [](void *component, ::YAML::Node &node) {                              \
            auto com = static_cast<className *>(component);                    \
            ::YAML::Node propertyName##Node;                                   \
            ::star::ClassDB::structSerialize[#propertyType](                   \
                (void *)&com->propertyName, propertyName##Node);               \
            node[#propertyName] = propertyName##Node;                          \
        });

#define STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_PROPERTY(                     \
    className, propertyType, propertyName)                                     \
    ::star::ClassDB::componentDeserialize[#className].pushBack(                \
        [](void *component, const YAML::Node &node) {                          \
            auto com = static_cast<className *>(component);                    \
            ::star::ClassDB::structDeserialize[#propertyType](                 \
                (void *)&com->propertyName, node[#propertyName]);              \
        });

#define STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_PROPERTY(                       \
    className, propertyType, propertyName)                                     \
    ::star::ClassDB::componentEditorUI[#className].pushBack(                   \
        [](void *component) {                                                  \
            auto com = static_cast<className *>(component);                    \
            ::star::ClassDB::structEditorUI[#propertyType](                    \
                #propertyName, (void *)&com->propertyName);                    \
        });

#define STAR_AUTO_CLASS_DB_COMPONENT_PROPERTY(className, propertyType,         \
                                              propertyName)                    \
    STAR_AUTO_CLASS_DB_COMPONENT_SERIALIZE_PROPERTY(className, propertyType,   \
                                                    propertyName)              \
    STAR_AUTO_CLASS_DB_COMPONENT_DESERIALIZE_PROPERTY(className, propertyType, \
                                                      propertyName)            \
    STAR_AUTO_CLASS_DB_COMPONENT_EDITOR_UI_PROPERTY(className, propertyType,   \
                                                    propertyName)

#define STAR_AUTO_CLASS_DB_ADD_COMPONENT(className, ...)                       \
    ::star::ClassDB::addComponent[#className] = [](Entity &entity) {           \
        return (void *)&entity.addComponent<className>(##__VA_ARGS__);         \
    };                                                                         \
    ::star::ClassDB::copyComponent[#className] = [](void *com, void *target) { \
        *static_cast<className *>(target) = *static_cast<className *>(com);    \
    };

#define STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_PROPERTY(className, propertyType,  \
                                                     propertyName)             \
    ::star::ClassDB::structSerialize[#className].pushBack(                     \
        [](void *data, ::YAML::Node &node) {                                   \
            auto data_ = static_cast<className *>(data);                       \
            ::YAML::Node propertyName##Node;                                   \
            ::star::ClassDB::structSerialize[#propertyType](                   \
                (void *)&data_->propertyName, propertyName##Node);             \
            node[#propertyName] = propertyName##Node;                          \
        });

#define STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_PROPERTY(                        \
    className, propertyType, propertyName)                                     \
    ::star::ClassDB::structDeserialize[#className].pushBack(                   \
        [](void *data, const YAML::Node &node) {                               \
            auto data_ = static_cast<className *>(data);                       \
            ::star::ClassDB::structDeserialize[#propertyType](                 \
                (void *)&data_->propertyName, node[#propertyName]);            \
        });

#define STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_PROPERTY(className, propertyType,  \
                                                     propertyName)             \
    ::star::ClassDB::structEditorUI[#className].pushBack(                      \
        [](const char *name, void *data) {                                     \
            auto data_ = static_cast<className *>(data);                       \
            ::star::ClassDB::structEditorUI[#propertyType](                    \
                #propertyName, (void *)&data_->propertyName);                  \
        });

#define STAR_AUTO_CLASS_DB_STRUCT_PROPERTY(className, propertyType,            \
                                           propertyName)                       \
    STAR_AUTO_CLASS_DB_STRUCT_SERIALIZE_PROPERTY(className, propertyType,      \
                                                 propertyName)                 \
    STAR_AUTO_CLASS_DB_STRUCT_DESERIALIZE_PROPERTY(className, propertyType,    \
                                                   propertyName)               \
    STAR_AUTO_CLASS_DB_STRUCT_EDITOR_UI_PROPERTY(className, propertyType,      \
                                                 propertyName)

#define STAR_AUTO_CLASS_DB_ENUM(className, num, ...)                           \
    ::star::ClassDB::componentSerialize[#className].pushBack(                  \
        [](void *data, ::YAML::Node &node) {                                   \
            auto data_ = static_cast<int32_t *>(data);                         \
            node["value"] = *data_;                                            \
        });                                                                    \
    ::star::ClassDB::componentDeserialize[#className].pushBack(                \
        [](void *data, const YAML::Node &node) {                               \
            auto data_ = static_cast<int32_t *>(data);                         \
            *data = static_cast<className>(node["value"].as<int32_t>);         \
        });                                                                    \
    ::star::ClassDB::componentEditorUI[#className].pushBack(                   \
        [](const char *name, void *data) {                                     \
            auto data_ = static_cast<className *>(data);                       \
            auto itemPtr = static_cast<int32_t *>(data);                       \
            const char *items[] = {__VA_ARGS__};                               \
            if (ImGui::Combo(name, itemPtr, items, num)                          \
                *data_ = static_cast<className>(*itemPtr);                     \
        });

#endif // STAR_CLASS_DB_MACRO_HPP