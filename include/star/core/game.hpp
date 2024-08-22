#ifndef STAR_GAME_HPP
#define STAR_GAME_HPP

#include "star/core/ecs/scene.hpp"
#include "star/core/event/event_dispatcher.hpp"
#include "star/core/io/log.hpp"
#include "star/core/window.hpp"
#include "star/def.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

namespace star {
class Game {
    using PairT = std::pair<String, Scene *>;

  public:
    static void init(StringView name, Window *window);
    static void close();
    static void addScene(const String &name, Scene *scene);
    static void loadScene(const String &name);
    static void loadSceneWithoutUnload(const String &name);
    static void upload(const String &name);
    static Window *getWindow();
    static Scene *getActiveScene();

  private:
    static Window *_window;
    static PairT _activeScene;
    static String _name;
    static HashMap<String, Scene *> _scenes;
};
} // namespace star

#endif // STAR_GAME_HPP
