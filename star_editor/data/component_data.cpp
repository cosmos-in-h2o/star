#include "component_data.hpp"

#include <utility>

ComponentData::ComponentData() = default;

ComponentData::ComponentData(std::string name, std::string type)
    : _name(std::move(name)), _type(std::move(type)) {}

YAML::Node ComponentData::serialize() const {
    YAML::Node node;
    node["type"] = _type;
    node["name"] = _name;
    YAML::Node data;
    data = _data;
    node["data"] = data;
    return node;
}

ComponentData ComponentData::loadFromNode(YAML::Node &node) {
    ComponentData data;
    if (node["type"]) {
        data._type = node["type"].as<std::string>();
    }
    if (node["name"]) {
        data._name = node["name"].as<std::string>();
    }
    if (node["data"]) {
        for (const auto &item : node["data"]) {
            data._data[item.first.as<std::string>()] = item.second;
        }
    }
    return data;
}

void ComponentData::setType(const std::string &type) { _type = type; }
