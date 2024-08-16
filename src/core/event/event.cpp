#include <star/core/event/event.hpp>

namespace star {
Event::Event() = default;

Event::~Event() = default;

EventType Event::getType() { return EventType::UNKNOWN; }

const Event emptyEvent{};
} // namespace star
