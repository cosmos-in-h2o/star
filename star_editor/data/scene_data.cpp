#include "scene_data.hpp"
#include "star/tool/class_db.hpp"
#include <fstream>

EntityData::EntityData() = default;

EntityData::EntityData(const std::string &name, const star::Entity &entity) {
    this->name = name;
    this->entity = entity;
}

star::Component *EntityData::addComponent(const std::string &component) {
    components[component].component = static_cast<star::Component *>(
        star::ClassDB::addComponent[component](entity));
    return components[component].component;
}

YAML::Node EntityData::serialize() const {
    YAML::Node node;
    node["name"] = name;
    for (auto &[k, v] : components) {
        star::Log::debug("{}", k);
        YAML::Node componentNode;
        componentNode["type"] = k;
        componentNode["isOpen"] = v.isOpen;
        YAML::Node data;
        star::ClassDB::componentSerialize[k](v.component, data);
        componentNode["data"] = data;
        node["components"].push_back(componentNode);
    }
    return node;
}

EntityData EntityData::loadFromNode(star::Scene &scene, YAML::Node &node) {
    EntityData data;
    if (node["name"]) {
        data.name = node["name"].as<std::string>();
    }
    data.entity = scene.addEntity(data.name);
    if (node["components"]) {
        for (auto item : node["components"]) {
            auto com =
                star::ClassDB::addComponent[item["type"].as<std::string>()](
                    data.entity);
            bool isOpen = item["isOpen"].as<bool>();
            star::ClassDB::componentDeserialize[item["type"].as<std::string>()](
                com, item["data"]);
            data.components[item["type"].as<std::string>()] = {
                isOpen, (star::Component *)com};
        }
    }
    return data;
}

SceneData::SceneData() = default;

SceneData::SceneData(std::string name) : _name(std::move(name)) {}

EntityData &SceneData::addEntity(const std::string &folder,
                                 const std::string &entity) {
    return _folders[folder].entities.emplace_back(entity,
                                                  _scene.addEntity(entity));
}

YAML::Node SceneData::serialize() const {
    YAML::Node node;
    node["name"] = _name;
    for (const auto &[k, v] : _folders) {
        YAML::Node folderNode;
        folderNode["name"] = k;
        folderNode["isOpen"] = v.isOpen;
        for (const auto &item : v.entities) {
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
            auto &folder = _folders[item["name"].as<std::string>()];
            folder.isOpen = item["isOpen"].as<bool>();
            for (auto item1 : item["entities"]) {
                folder.entities.push_back(
                    EntityData::loadFromNode(_scene, item1));
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
            for (auto &[k1, v1] : v.getFolders()) {
                for (auto &item : v1.entities) {
                    auto entity = ptr->addEntity(item.name);
                    for (auto &[comType, comData] : item.components) {
                        auto com = star::ClassDB::addComponent[comType](entity);
                        star::ClassDB::copyComponent[comType](comData.component,
                                                              com);
                    }
                }
            }
            return new star::Scene;
        };
    }
}
