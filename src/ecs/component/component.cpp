#include <atomic>
#include <star/ecs/component/component.hpp>

namespace star {
uint64 Component::assignId() {
    static std::atomic<uint64> var(0);
    return var++;
}

Component::Component() { this->_id = assignId(); }

Component::~Component()=default;

uint64 Component::getId() const {
    return this->_id;
}
} // namespace star