#include "entity_data.hpp"

#include <utility>

EntityData::EntityData() = default;

EntityData::EntityData(std::string name) : _name(std::move(name)) {}

void EntityData::addComponent(const ComponentData &data) {
    _components.push_back(data);
}

YAML::Node EntityData::serialize() const {
    YAML::Node node;
    node["name"] = _name;
    for (const auto &item : _components) {
        node["components"].push_back(item.serialize());
    }
    return node;
}

void EntityData::loadToEntity(star::Scene *scene) {
    auto entity=scene -> addEntity(_name);
//    entity.addComponent<>()
}

EntityData EntityData::loadFromNode(YAML::Node &node) {
    EntityData data;
    if (node["name"]) {
        data._name = node["name"].as<std::string>();
    }
    if (node["components"]) {
        for (auto item : node["components"]) {
            data._components.push_back(ComponentData::loadFromNode(item));
        }
    }
    return data;
}
