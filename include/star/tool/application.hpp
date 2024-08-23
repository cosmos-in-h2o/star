#ifndef STAR_APPLICATION_HPP
#define STAR_APPLICATION_HPP

#include "star/def.hpp"

namespace star {
class Application {
  public:
    virtual int run(int argc, char **argv) = 0;
};

using InterfaceFunc = FuncPtr<Application>;
} // namespace star

#endif // STAR_APPLICATION_HPP