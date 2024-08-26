#ifndef STAR_STRING_HPP
#define STAR_STRING_HPP

#include <string>
#include "star/def.hpp"

namespace star {
template <class E> using BasicString = std::basic_string<E>;
using String = BasicString<char8>;
using U8String = BasicString<char8_t>;
} // namespace star

#endif // STAR_STRING_HPP
