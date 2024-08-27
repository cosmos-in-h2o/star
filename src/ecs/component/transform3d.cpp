#include "star/ecs/component/transform3d.hpp"
#include "star/tool/class_db.hpp"

namespace star {
void Transform3D::starBindFunc() {
    STAR_AUTO_CLASS_DB_ADD_COMPONENT(star::Transform3D)
    STAR_AUTO_CLASS_DB_COMPONENT_PROPERTY(star::Transform3D, star::vec3,
                                          position)
    STAR_AUTO_CLASS_DB_COMPONENT_PROPERTY(star::Transform3D, star::vec3,
                                          rotation)
    STAR_AUTO_CLASS_DB_COMPONENT_PROPERTY(star::Transform3D, star::vec3, scale)
}
} // namespace star