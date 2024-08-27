#ifndef STAR_APPLICATION_HPP
#define STAR_APPLICATION_HPP

#include "star/def.hpp"

namespace star {
class Application {
  public:
    virtual void init() = 0;
    virtual void run(int argc, char **argv) = 0;
    virtual void starBindFunc() = 0;
};

struct ExportData {
    Application *application;
    HashMap<String, CreateSceneFunc>*scenes;
};

using EntryPoionFunc = FuncPtr<void, EventDispatcher &>;
using InterfaceFunc = FuncPtr<ExportData>;
} // namespace star

#endif // STAR_APPLICATION_HPP