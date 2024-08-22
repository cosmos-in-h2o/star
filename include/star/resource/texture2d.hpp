#ifndef STAR_TEXTURE2D_HPP
#define STAR_TEXTURE2D_HPP

#include "star/resource/resource.hpp"

namespace star {
class Texture2D : public Resource {
  public:
    ~Texture2D() override;
    int32_t width{}, height{}, channels{};
    uint8_t *data;
};
} // namespace star

#endif // STAR_TEXTURE2D_HPP
