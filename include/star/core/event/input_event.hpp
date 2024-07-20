#ifndef STAR_INPUT_EVENT_HPP
#define STAR_INPUT_EVENT_HPP

#include <star/core/event/event.hpp>
#include <star/core/os/key.hpp>

namespace star {
class STAR_API KeyEvent : public Event {
  public:
    explicit KeyEvent(Key key);
    Key getKeyCode() const;

  private:
    Key _key;
};

class STAR_API KeyPressedEvent : public KeyEvent {
  public:
    explicit KeyPressedEvent(Key key, bool isRepeat = false);
    EventType getType() override;
    bool isRepeat() const;

  private:
    bool _isRepeat;
};

class STAR_API  KeyReleasedEvent : public KeyEvent {
  public:
    explicit KeyReleasedEvent(Key key);
    EventType getType() override;
};

class STAR_API KeyTypedEvent : public KeyEvent {
  public:
    explicit KeyTypedEvent(Key key);
    EventType getType() override;
};

REGISTER_CALLBACK_FN(KeyEvent)
REGISTER_CALLBACK_FN(KeyPressedEvent)
REGISTER_CALLBACK_FN(KeyReleasedEvent)
REGISTER_CALLBACK_FN(KeyTypedEvent)
} // namespace star

#endif // STAR_INPUT_EVENT_HPP