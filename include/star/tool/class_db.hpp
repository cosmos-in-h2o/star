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

template <class T> struct FuncGroup {
    FuncGroup() { _funcList.reserve(32); }
    void pushBack(T &&func) { _funcList.push_back(std::forward<T>(func)); }
    void operator()(auto &&...args) {
        for (auto item : _funcList) {
            item(std::forward<decltype(args)>(args)...);
        }
    }

  private:
    List<T> _funcList{};
};

class ClassDB {
  public:
    static HashMap<String, FuncGroup<ComponentSerializeFunc>>
        componentSerialize;
    static HashMap<String, FuncGroup<ComponentDeserializeFunc>>
        componentDeserialize;
    static HashMap<String, FuncGroup<ComponentEditorUIFunc>> componentEditorUI;
    static HashMap<String, FuncGroup<StructSerializeFunc>> structSerialize;
    static HashMap<String, FuncGroup<StructDeserializeFunc>> structDeserialize;
    static HashMap<String, FuncGroup<StructEditorUIFunc>> structEditorUI;
};
} // namespace star

#endif // STAR_CLASS_DB_HPP
