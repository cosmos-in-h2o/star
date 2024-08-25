#ifndef STAR_APPLICATION_HPP
#define STAR_APPLICATION_HPP

#include "star/def.hpp"

namespace star {
class Application {
  public:
    virtual void init() = 0;
    virtual void run(int argc, char **argv) = 0;
    virtual void registerComponents() = 0;
};

using InterfaceFunc = FuncPtr<Application *>;
} // namespace star

#endif // STAR_APPLICATION_HPP