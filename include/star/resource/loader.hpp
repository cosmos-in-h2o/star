#ifndef STAR_LOADER_HPP
#define STAR_LOADER_HPP

#include "star/resource/texture2d.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

namespace star {
class Loader {
  public:
    static String loadString(StringView path);
    static Texture2D* loadTexture2D(StringView path);
};
} // namespace star

#endif // STAR_LOADER_HPP