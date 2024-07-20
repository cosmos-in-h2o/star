#ifndef STAR_STRING_NAME_HPP
#define STAR_STRING_NAME_HPP

#include <string_view>

namespace star {
template <typename E> using BasicStringView = std::basic_string_view<E>;
using StringView = BasicStringView<char>;
} // namespace star

#endif // STAR_STRING_NAME_HPP
