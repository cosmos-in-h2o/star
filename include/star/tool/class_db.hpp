#ifndef STAR_CLASS_DB_HPP
#define STAR_CLASS_DB_HPP

#include "star/core/ecs/scene.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/string.hpp"
#include "star/tool/class_db_macro.hpp"
#include <yaml-cpp/yaml.h>

namespace star {
using ComponentSerializeFunc = FuncPtr<void, void *, YAML::Node &>;
using ComponentDeserializeFunc = FuncPtr<void, Entity &, const YAML::Node &>;
using ComponentEditorUIFunc = FuncPtr<void, void *>;
using StructSerializeFunc = FuncPtr<void, void *, YAML::Node &>;
using StructDeserializeFunc = FuncPtr<void, void *, const YAML::Node &>;
using StructEditorUIFunc = FuncPtr<void, const char *, void *>;

class ClassDB {
  public:
    static HashMap<String, ComponentSerializeFunc> componentSerialize;
    static HashMap<String, ComponentDeserializeFunc> componentDeserialize;
    static HashMap<String, ComponentEditorUIFunc> componentEditorUI;
    static HashMap<String, StructSerializeFunc> structSerialize;
    static HashMap<String, StructDeserializeFunc> structDeserialize;
    static HashMap<String, StructEditorUIFunc> structEditorUI;
};
} // namespace star

#endif // STAR_CLASS_DB_HPP
