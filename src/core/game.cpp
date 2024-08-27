#include "star/core/event/ecs_event.hpp"
#include <star/core/error/error.hpp>
#include <star/core/game.hpp>
#include <star/platform/windows/windows_window.hpp>

namespace star {
Game::PairT Game::_activeScene;
Window *Game::_window = nullptr;
String Game::_name{};
HashMap<String, Scene *> Game::_scenes{};
HashMap<String, CreateSceneFunc> Game::_createScene;

void Game::init(StringView name, Window *window) {
    _name = name;
    if (!window) {
        ErrorHandler::reportError(makeError(ErrorType::NULLPTR_ARG), "window");
        return;
    }
    _window = window;
}

void Game::close() {
    for (auto &p : _scenes) {
        if (p.second) {
            delete p.second;
            p.second = nullptr;
        }
    }
}

Scene *Game::createScene(const String &sceneName) {
    return _createScene[sceneName]();
}

void Game::addScene(const String &name, Scene *scene) {
    // 如果在列表中找到同名场景则删除列表中的场景
    auto it = _scenes.find(name);
    if (it != _scenes.end()) {
        // 如果场景已经被加载过
        if (it->second == scene) {
            return;
        }
        Collector::push(it->second);
    }
    if (!scene) {
        ErrorHandler::reportWarn(makeError(ErrorType::NULLPTR_ARG), "scene");
    }
    _scenes[name] = scene;
}

void Game::loadScene(const String &name) {
    auto it = _scenes.find(name);
    if (it == _scenes.end()) {
        Log::warn("Not found Scene: {}, you must add before load.", name);
        return;
    }
    // 若场景已经被加载
    if (_activeScene.second == it->second) {
        return;
    }
    // 找到了场景并且未被加载则删除原场景并加载新场景
    auto backScene = _scenes.find(_activeScene.first);
    // 先替换掉活动场景再进行删除，防止多线程中外界对野指针的访问
    _activeScene = *it;
    if (backScene != _scenes.end()) {
        Collector::push(backScene->second);
        _scenes.erase(backScene);
    }
    // 若新场景可用则注册事件并初始化
    if (_activeScene.second) {
        _window->registerDispatch(_activeScene.second->getDispatcher());
        it->second->init();
    }
}

void Game::loadSceneWithoutUnload(const String &name) {
    auto it = _scenes.find(name);
    if (it == _scenes.end()) {
        Log::warn("Not found Scene: {}, you must add before load.", name);
        return;
    }
    if (_activeScene.second == it->second) {
        return;
    }
    _activeScene = *it;
    if (_activeScene.second) {
        _window->registerDispatch(_activeScene.second->getDispatcher());
        it->second->init();
    }
}

void Game::upload(const String &name) {
    auto it = _scenes.find(name);
    if (it == _scenes.end()) {
        Log::warn("Not found Scene: {}, you must add before unload.", name);
        return;
    }
    if (it->second == _activeScene.second) {
        Log::warn("You're trying to unload active scene.");
    }
    Collector::push(it->second);
    _scenes.erase(it);
}

Window *Game::getWindow() { return _window; }

Scene *Game::getActiveScene() { return _activeScene.second; }
} // namespace star