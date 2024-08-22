#include "star/platform/windows/windows_window.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/map.hpp"
#include <iostream>

void func() {
    star::EventDispatcher dispatcher;
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "1" << std::endl; },
        static_cast<star::EventOrder>(0xff + 0x1));
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "2" << std::endl; },
        static_cast<star::EventOrder>(0xff + 0x1));
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "3" << std::endl; },
        static_cast<star::EventOrder>(0xff + 0x1));
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "4" << std::endl; },
        static_cast<star::EventOrder>(0xff + 0x1));
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "5" << std::endl; },
        static_cast<star::EventOrder>(0xff));
    dispatcher.subscribeEvent(
        star::EventType::UNKNOWN,
        [](const star::Event &e) { std::cout << "6" << std::endl; },
        static_cast<star::EventOrder>(0xff));

    dispatcher.dispatchEvent(star::EventType::UNKNOWN, star::emptyEvent);
}

int main() {
    star::Log::init("test");
    for (int i = 0; i < 256; i++) {

        std::cout << i << "**************************************" << std::endl;
        func();
    }
    return 0;
}