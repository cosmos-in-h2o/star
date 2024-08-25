#include "star/tool/class_db.hpp"

namespace star {
HashMap<String, ComponentSerializeFunc> ClassDB::componentSerialize;
HashMap<String, ComponentDeserializeFunc> ClassDB::componentDeserialize;
HashMap<String, ComponentEditorUIFunc> ClassDB::componentEditorUI;
HashMap<String, StructSerializeFunc> ClassDB::structSerialize;
HashMap<String, StructDeserializeFunc> ClassDB::structDeserialize;
HashMap<String, StructEditorUIFunc> ClassDB::structEditorUI;
} // namespace star