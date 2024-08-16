#ifndef STAR_COMPONENT_HPP
#define STAR_COMPONENT_HPP

#include <star/def.hpp>

namespace star{
class Component{
  public:
    Component();
    virtual ~Component();
    uint64 getId() const;

  private:
    static uint64 assignId();
    uint64 _id{};

};
}

#endif // STAR_COMPONENT_HPP
