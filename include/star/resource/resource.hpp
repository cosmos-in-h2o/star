#ifndef STAR_RESOURCE_HPP
#define STAR_RESOURCE_HPP

#include <array>

// 资源接口，所有资源类继承此接口
namespace star {
class Resource {
  public:
    Resource();
    virtual ~Resource();
    size_t size=0;
};
} // namespace star

#endif // STAR_RESOURCE_HPP
