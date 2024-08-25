#ifndef STAR_ENTITY_DATA_HPP
#define STAR_ENTITY_DATA_HPP

#include "component_data.hpp"
#include "star/core/ecs/scene.hpp"
#include "yaml-cpp/yaml.h"
#include <string>
#include <vector>

class EntityData {
  public:
    EntityData();
    explicit EntityData(std::string name);

    void addComponent(const ComponentData &data);
    YAML::Node serialize() const;
    void loadToEntity(star::Scene *scene);
    static EntityData loadFromNode(YAML::Node &node);

  private:
    std::string _name{};
    std::vector<ComponentData> _components{};
};

#endif // STAR_ENTITY_DATA_HPP
