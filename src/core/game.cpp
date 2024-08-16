#include <star/core/error/error.hpp>
#include <star/core/game.hpp>
#include <star/platform/windows/windows_window.hpp>
#include <star/tool/imgui/imgui.hpp>

namespace star {
Scene *Game::_sActiveScene = nullptr;
Window *Game::_sWindow = nullptr;
String Game::_sName{};

EventDispatcher &Game::_sDispatcher() {
    static EventDispatcher sDispatcher{};
    return sDispatcher;
}

void Game::init(StringView name, Window *window,Scene*scene) {
    _sName = name;
    if (!window) {
        ErrorHandler::reportError(makeError(ErrorType::NULLPTR_ARG), "window");
        return;
    }
    _sWindow = window;

    _sActiveScene=scene;
    if(!_sActiveScene){
        ErrorHandler::reportWarn(makeError(ErrorType::NULLPTR_ARG),"scene");
        _sWindow->registerDispatch(_sActiveScene->getDispatcher());
    }
//    ImGuiLayer::init((GLFWwindow *)_sWindow->getNativeWindow());
}

void Game::close() {
    if (_sActiveScene) {
        _sActiveScene->close();
    }
//    ImGuiLayer::close();
}

void Game::loadScene(Scene *scene) {
    if (_sActiveScene) {
        _sActiveScene->close();
    }
    if (!scene) {
        ErrorHandler::reportWarn(makeError(ErrorType::NULLPTR_ARG), "scene");
    }
    _sActiveScene = scene;
    if (_sActiveScene) {
        _sWindow->registerDispatch(_sActiveScene->getDispatcher());
        _sActiveScene->init();
    }
}

Window *Game::getWindow() { return _sWindow; }

Scene *Game::getActiveScene() { return _sActiveScene; }

EventDispatcher &Game::getDispatcher() { return _sDispatcher(); }
} // namespace star