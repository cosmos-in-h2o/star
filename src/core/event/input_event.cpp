#include <star/core/event/input_event.hpp>

namespace star {
KeyEvent::KeyEvent(const Key key) : _key(key) {}

Key KeyEvent::getKeyCode() const { return this->_key; }

KeyPressedEvent::KeyPressedEvent(Key key, bool isRepeat)
    : KeyEvent(key), _isRepeat(isRepeat) {}

EventType KeyPressedEvent::getType() const { return EventType::KEY_PRESSED; }

bool KeyPressedEvent::isRepeat() const { return this->_isRepeat; }

KeyReleasedEvent::KeyReleasedEvent(Key key) : KeyEvent(key) {}

EventType KeyReleasedEvent::getType() const { return EventType::KEY_RELEASED; }

KeyTypedEvent::KeyTypedEvent(Key key) : KeyEvent(key) {}

EventType KeyTypedEvent::getType() const { return EventType::KEY_TYPED; }
} // namespace star