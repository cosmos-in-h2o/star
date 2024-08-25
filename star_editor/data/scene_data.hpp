#ifndef STAR_SCENE_DATA_HPP
#define STAR_SCENE_DATA_HPP

#include "entity_data.hpp"
#include "star/core/ecs/scene.hpp"
#include "yaml-cpp/yaml.h"
#include <string>
#include <vector>

class SceneData {
  public:
    SceneData();
    explicit SceneData(std::string name);

    void addEntity(const std::string &folder, const EntityData &entity);

    YAML::Node serialize() const;
    void writeToFile(const char *path) const;
    star::Scene* loadToScene();
    static SceneData loadFromNode(YAML::Node &node);
    static SceneData loadFromFile(const char *path);

  private:
    std::string _name{};

    std::unordered_map<std::string, std::vector<EntityData>> _entities{};
};

#endif // STAR_SCENE_DATA_HPP
