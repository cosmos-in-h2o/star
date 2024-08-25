#ifndef STAR_COMPONENT_DATA_HPP
#define STAR_COMPONENT_DATA_HPP

#include "yaml-cpp/yaml.h"
#include <string>
#include <vector>

class ComponentData {
  public:
    ComponentData();
    ComponentData(std::string type, std::string name);
    void addData(const std::string &attribute, const std::string &detail,
                 auto &&value) {
        _data[attribute][detail] = std::forward<decltype(value)>(value);
    }
    void setType(const std::string &type);
    YAML::Node serialize() const;
    static ComponentData loadFromNode(YAML::Node &node);

  private:
    std::string _type{};
    std::string _name{};
    // 把node作为一个抽象出来的结构体类型，能够储存任何组件数据
    std::unordered_map<std::string, YAML::Node> _data{};
};

#endif // STAR_COMPONENT_DATA_HPP
