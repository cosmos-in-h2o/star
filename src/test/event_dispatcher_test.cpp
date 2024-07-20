#include "star/core/io/log.hpp"
#include <star/core/event/event_dispatcher.hpp>
#include <star/core/event/input_event.hpp>

void env1() {
    star::Log::init("env1");

    auto callback1 = [](const star::Event &e) { star::Log::info("callback1"); };
    auto callback2 = [](const star::Event &e) { star::Log::info("callback2"); };
    auto callback3 = [](const star::Event &e) { star::Log::info("callback3"); };
    star::EventDispatcher dispatcher;
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback2);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback3);

    star::KeyPressedEvent e(star::Key::UNKNOWN);

    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
    dispatcher.removeListener(star::MOUSE_SHIFTED);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
}

void env2() {
    star::Log::init("env2");

    auto callback1 = [](const star::Event &e) { star::Log::info("callback1"); };
    auto callback2 = [](const star::Event &e) { star::Log::info("callback2"); };
    auto callback3 = [](const star::Event &e) { star::Log::info("callback3"); };
    star::EventDispatcher dispatcher;
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback2);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback3);

    star::KeyPressedEvent e(star::Key::UNKNOWN);

    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
    dispatcher.removeListener(callback3);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
}

void env3() {
    star::Log::init("env3");

    auto callback1 = [](const star::Event &e) { star::Log::info("callback1"); };
    auto callback2 = [](const star::Event &e) { star::Log::info("callback2"); };
    auto callback3 = [](const star::Event &e) { star::Log::info("callback3"); };
    star::EventDispatcher dispatcher;
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_PRESSED, callback2);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_BUTTON_RELEASED,
                              callback3);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback1);
    dispatcher.subscribeEvent(star::EventType::MOUSE_SHIFTED, callback3);

    star::KeyPressedEvent e(star::Key::UNKNOWN);

    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
    dispatcher.removeListener(star::EventType::MOUSE_BUTTON_PRESSED, callback1);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_PRESSED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_BUTTON_RELEASED, e);
    dispatcher.dispatchEvent(star::EventType::MOUSE_SHIFTED, e);
    star::Log::info("----------------------------------------");
}
int main() {
    env3();
    return 0;
}