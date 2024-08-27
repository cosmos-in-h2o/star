#include "star/tool/class_db.hpp"

namespace star {
HashMap<String, AddComponentFunc> ClassDB::addComponent;
HashMap<String, CopyComponentFunc> ClassDB::copyComponent;
HashMap<String, FuncGroup<ComponentSerializeFunc>> ClassDB::componentSerialize;
HashMap<String, FuncGroup<ComponentDeserializeFunc>>
    ClassDB::componentDeserialize;
HashMap<String, FuncGroup<ComponentEditorUIFunc>> ClassDB::componentEditorUI;
HashMap<String, FuncGroup<StructSerializeFunc>> ClassDB::structSerialize;
HashMap<String, FuncGroup<StructDeserializeFunc>> ClassDB::structDeserialize;
HashMap<String, FuncGroup<StructEditorUIFunc>> ClassDB::structEditorUI;
} // namespace star