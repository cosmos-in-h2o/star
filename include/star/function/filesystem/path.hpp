#ifndef STAR_PATH_HPP
#define STAR_PATH_HPP

#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"

namespace star{
class Path {
  public:
    static void init(StringView root);
    static String pathConvert(StringView path);
  private:
    static String _root;
};
}

#endif // STAR_PATH_HPP
