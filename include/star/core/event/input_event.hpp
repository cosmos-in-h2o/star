#ifndef STAR_INPUT_EVENT_HPP
#define STAR_INPUT_EVENT_HPP

#include <star/core/event/event.hpp>
#include <star/core/os/key.hpp>

namespace star {
class KeyEvent : public Event {
  public:
    explicit KeyEvent(Key key);
    Key getKeyCode() const;

  private:
    Key _key;
};

class KeyPressedEvent : public KeyEvent {
  public:
    explicit KeyPressedEvent(Key key, bool isRepeat = false);
    EventType getType() const override;
    bool isRepeat() const;

  private:
    bool _isRepeat;
};

class KeyReleasedEvent : public KeyEvent {
  public:
    explicit KeyReleasedEvent(Key key);
    EventType getType()const override;
};

class KeyTypedEvent : public KeyEvent {
  public:
    explicit KeyTypedEvent(Key key);
    EventType getType() const override;
};

REGISTER_CALLBACK_FN(KeyEvent)
REGISTER_CALLBACK_FN(KeyPressedEvent)
REGISTER_CALLBACK_FN(KeyReleasedEvent)
REGISTER_CALLBACK_FN(KeyTypedEvent)
} // namespace star

#endif // STAR_INPUT_EVENT_HPP