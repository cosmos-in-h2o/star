#ifndef STAR_COMPONENT_HPP
#define STAR_COMPONENT_HPP

#include <star/def.hpp>

namespace star{
class Component{
  public:
    Component();
    virtual ~Component();
    uint64_t getId() const;

  private:
    static uint64_t assignId();
    uint64_t _id{};

};
}

#endif // STAR_COMPONENT_HPP
