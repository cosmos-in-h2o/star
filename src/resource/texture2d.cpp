#include "star/resource/texture2d.hpp"
#include "star/core/io/log.hpp"
#include <stb_image.hpp>

namespace star {
Texture2D::~Texture2D() {
    stbi_image_free(data);
}
} // namespace star