#ifndef STAR_DEF_HPP
#define STAR_DEF_HPP

#include <limits>

namespace star {
using int8 = signed char;
using int16 = signed short int;
using int32 = signed int;
using int64 = signed long long int;
using uint8 = unsigned char;
using uint16 = unsigned short int;
using uint32 = unsigned int;
using uint64 = unsigned long long int;
using float32 = float;
using float64 = double;
using float128 = long double;

constexpr int8 int8_min = (std::numeric_limits<int8>::min)();
constexpr int8 int8_max = (std::numeric_limits<int8>::max)();
constexpr int16 int16_min = (std::numeric_limits<int16>::min)();
constexpr int16 int16_max = (std::numeric_limits<int16>::max)();
constexpr int32 int32_min = (std::numeric_limits<int32>::min)();
constexpr int32 int32_max = (std::numeric_limits<int32>::max)();
constexpr int64 int64_min = (std::numeric_limits<int64>::min)();
constexpr int64 int64_max = (std::numeric_limits<int64>::max)();
constexpr uint8 uint8_min = (std::numeric_limits<uint8>::min)();
constexpr uint8 uint8_max = (std::numeric_limits<uint8>::max)();
constexpr uint16 uint16_min = (std::numeric_limits<uint16>::min)();
constexpr uint16 uint16_max = (std::numeric_limits<uint16>::max)();
constexpr uint32 uint32_min = (std::numeric_limits<uint32>::min)();
constexpr uint32 uint32_max = (std::numeric_limits<uint32>::max)();
constexpr uint64 uint64_min = (std::numeric_limits<uint64>::min)();
constexpr uint64 uint64_max = (std::numeric_limits<uint64>::max)();

constexpr float32 float32_min = (std::numeric_limits<float32>::min)();
constexpr float32 float32_max = (std::numeric_limits<float32>::max)();
constexpr float64 float64_min = (std::numeric_limits<float64>::min)();
constexpr float64 float64_max = (std::numeric_limits<float64>::max)();
constexpr float128 float128_min = (std::numeric_limits<float128>::min)();
constexpr float128 float128_max = (std::numeric_limits<float128>::max)();

#if __SIZEOF_POINTER__ == 4
using int_t = int32;
using uint_t = uint32;
#else
using int_t = int64;
using uint_t = uint64;
#endif
} // namespace star

#define STAR_ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

#endif