#include <star/core/application.hpp>

namespace star {
Application::Application(const String &name, int32 width, int32 height) {
    star::Log::init(name);
    this->_isRun = true;
    this->_window = new WindowsWindow(name, width, height);
    this->_window->registerEvents();
}

Application::~Application() { this->_window->shutDown(); }

int Application::run() {
    EventDispatcher::subscribeEvent(EventType::KEY_PRESSED, [](const Event &e) {
        const auto &ke = static_cast<const KeyPressedEvent &>(e);
        Log::info("keycode:{0}", (int32)ke.getKeyCode());
    });
    while (this->_isRun) {
        this->_window->onUpdate();
    }
    return 0;
}

} // namespace star