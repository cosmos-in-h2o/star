#ifndef STAR_SCENE_DATA_HPP
#define STAR_SCENE_DATA_HPP

#include "star/core/ecs/scene.hpp"
#include "star/core/game.hpp"
#include "star/ecs/component/component.hpp"
#include "yaml-cpp/yaml.h"
#include <string>
#include <vector>

struct EntityData {
    EntityData();
    EntityData(const std::string &name, const star::Entity &entity);
    star::Entity entity;
    std::string name;
    std::unordered_map<std::string, star::Component *> components;
    star::Component *addComponent(const std::string &component);
    YAML::Node serialize() const;
    static EntityData loadFromNode(YAML::Node &node);
};

class SceneData {
  public:
    SceneData();
    explicit SceneData(std::string name);

    EntityData &addEntity(const std::string &folder, const std::string &entity);

    YAML::Node serialize() const;
    void writeToFile(const char *path) const;
    void loadFromNode(YAML::Node &node);
    void loadFromFile(const char *path);
    auto &getEntities(){return _entities;};

  private:
    std::string _name{};
    star::Scene _scene{};

    std::unordered_map<std::string, std::vector<EntityData>> _entities{};
};

struct SceneDataManager {
    std::unordered_map<std::string, SceneData> scenes{};
    void
    bindToGame(star::HashMap<star::String, star::CreateSceneFunc> *gameScenes);
};

#endif // STAR_SCENE_DATA_HPP
