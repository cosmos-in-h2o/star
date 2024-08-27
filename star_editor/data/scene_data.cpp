#include "scene_data.hpp"
#include "star/tool/class_db.hpp"
#include <fstream>
#include <iostream>

EntityData::EntityData() = default;

EntityData::EntityData(const std::string &name, const star::Entity &entity) {
    this->name = name;
    this->entity = entity;
}

star::Component *EntityData::addComponent(const std::string &component) {
    components[component] = static_cast<star::Component *>(
        star::ClassDB::addComponent[component](entity));
    return components[component];
}

YAML::Node EntityData::serialize() const {
    YAML::Node node;
    node["name"] = name;
    for (auto &[k, v] : components) {
        star::Log::debug("{}", k);
        YAML::Node componentNode;
        componentNode["type"] = k;
        YAML::Node data;
        star::ClassDB::componentSerialize[k](v, data);
        componentNode["data"] = data;
        node["components"].push_back(componentNode);
    }
    return node;
}

EntityData EntityData::loadFromNode(YAML::Node &node) {
    EntityData data;
    if (node["name"]) {
        data.name = node["name"].as<std::string>();
    }
    if (node["components"]) {
        for (auto item : node["components"]) {
            auto com =
                star::ClassDB::addComponent[item["type"].as<std::string>()](
                    data.entity);
            star::ClassDB::componentDeserialize[item["type"].as<std::string>()](
                com, item["data"]);
        }
    }
}

SceneData::SceneData() = default;

SceneData::SceneData(std::string name) : _name(std::move(name)) {}

EntityData &SceneData::addEntity(const std::string &folder,
                                 const std::string &entity) {
    return _entities[folder].emplace_back(entity, _scene.addEntity(entity));
}

YAML::Node SceneData::serialize() const {
    YAML::Node node;
    node["name"] = _name;
    for (const auto &[k, v] : _entities) {
        YAML::Node folderNode;
        folderNode["name"] = k;
        for (const auto &item : v) {
            folderNode["entities"].push_back(item.serialize());
        }
        node["folders"].push_back(folderNode);
    }
    return node;
}

void SceneData::writeToFile(const char *path) const {
    auto node = serialize();
    std::ofstream out(path);
    out << node;
    out.close();
}

void SceneData::loadFromNode(YAML::Node &node) {
    if (node["name"]) {
        _name = node["name"].as<std::string>();
    }
    if (node["folders"]) {
        for (auto item : node["folders"]) {
            for (auto item1 : item["entities"]) {
                _entities[item["name"].as<std::string>()].push_back(
                    EntityData::loadFromNode(item1));
            }
        }
    }
}

void SceneData::loadFromFile(const char *path) {
    auto node = YAML::LoadFile(path);
    loadFromNode(node);
}

void SceneDataManager::bindToGame(
    star::HashMap<star::String, star::CreateSceneFunc> *gameScenes) {
    if (!gameScenes) {
        return;
    }
    auto &gameScenesRef = *gameScenes;
    for (auto &[k, v] : scenes) {
        gameScenesRef[k] = [&]() {
            auto ptr = new star::Scene;
            for (auto &[k1, v1] : v.getEntities()) {
                for (auto &item : v1) {
                    auto entity = ptr->addEntity(item.name);
                    for (auto &[comType, comPtr] : item.components) {
                        auto com = star::ClassDB::addComponent[comType](entity);
                        star::ClassDB::copyComponent[comType](comPtr, com);
                    }
                }
            }
            return new star::Scene;
        };
    }
}
