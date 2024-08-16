#ifndef STAR_GAME_HPP
#define STAR_GAME_HPP

#include "star/core/ecs/scene.hpp"
#include "star/core/event/event_dispatcher.hpp"
#include "star/core/window.hpp"
#include "star/core/io/log.hpp"
#include "star/def.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

namespace star {
class Game {
  public:
    static void init(StringView name,Window *window,Scene*scene);
    static void close();
    static void loadScene(Scene *scene);
    static Window *getWindow();
    static Scene *getActiveScene();
    static EventDispatcher &getDispatcher();

  private:
    static Window *_sWindow;
    static Scene *_sActiveScene;
    static String _sName;
    static EventDispatcher &_sDispatcher();
};
} // namespace star

#endif // STAR_GAME_HPP
