#include "scene_data.hpp"
#include <fstream>

SceneData::SceneData() = default;

SceneData::SceneData(std::string name) : _name(std::move(name)) {}

void SceneData::addEntity(const std::string &folder, const EntityData &entity) {
    if (_entities.find(folder) != _entities.end()) {
        _entities[folder].push_back(entity);
    } else {
        _entities[folder] = {entity};
    }
}

YAML::Node SceneData::serialize() const {
    YAML::Node node;
    node["name"] = _name;
    YAML::Node entities;
    for (const auto &[k, v] : _entities) {
        for (const auto &item : v) {
            entities[k].push_back(item.serialize());
        }
    }
    node["entities"] = entities;
    return node;
}

void SceneData::writeToFile(const char *path) const {
    auto node = serialize();
    std::ofstream out(path);
    out << node;
    out.close();
}

SceneData SceneData::loadFromNode(YAML::Node &node) {
    SceneData data;
    if (node["name"]) {
        data._name = node["name"].as<std::string>();
    }
    if (node["entities"]) {
        for (auto item : node["entities"]) {
            if (data._entities.find(item.first.as<std::string>()) ==
                data._entities.end()) {
                data._entities[item.first.as<std::string>()] = {};
            }
            for (auto item1 : item.second) {
                data._entities[item.first.as<std::string>()].push_back(
                    EntityData::loadFromNode(item1));
            }
        }
    }
    return data;
}

SceneData SceneData::loadFromFile(const char *path) {
    auto node = YAML::LoadFile(path);
    return loadFromNode(node);
}

star::Scene *SceneData::loadToScene() {
    star::Scene *scene = new star::Scene;
    for (auto &[k, v] : _entities) {
        for (auto &item : v) {
            item.loadToEntity(scene);
        }
    }
    return scene;
}
