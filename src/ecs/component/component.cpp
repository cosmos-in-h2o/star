#include <atomic>
#include <star/ecs/component/component.hpp>

namespace star {
uint64_t Component::assignId() {
    static std::atomic<uint64_t> var(0);
    return var++;
}

Component::Component() { this->_id = assignId(); }

Component::~Component()=default;

uint64_t Component::getId() const {
    return this->_id;
}
} // namespace star