#ifndef STAR_LOADER_HPP
#define STAR_LOADER_HPP

#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

namespace star {
class Loader {
  public:
    static String loadString(StringView path);
};
} // namespace star

#endif // STAR_LOADER_HPP