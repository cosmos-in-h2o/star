#ifndef STAR_DEF_HPP
#define STAR_DEF_HPP

#include <array>
#include <limits>

namespace star {
constexpr int8_t int8_min = (std::numeric_limits<int8_t>::min)();
constexpr int8_t int8_max = (std::numeric_limits<int8_t>::max)();
constexpr int16_t int16_min = (std::numeric_limits<int16_t>::min)();
constexpr int16_t int16_max = (std::numeric_limits<int16_t>::max)();
constexpr int32_t int32_min = (std::numeric_limits<int32_t>::min)();
constexpr int32_t int32_max = (std::numeric_limits<int32_t>::max)();
constexpr int64_t int64_min = (std::numeric_limits<int64_t>::min)();
constexpr int64_t int64_max = (std::numeric_limits<int64_t>::max)();
constexpr uint8_t uint8_min = (std::numeric_limits<uint8_t>::min)();
constexpr uint8_t uint8_max = (std::numeric_limits<uint8_t>::max)();
constexpr uint16_t uint16_min = (std::numeric_limits<uint16_t>::min)();
constexpr uint16_t uint16_max = (std::numeric_limits<uint16_t>::max)();
constexpr uint32_t uint32_min = (std::numeric_limits<uint32_t>::min)();
constexpr uint32_t uint32_max = (std::numeric_limits<uint32_t>::max)();
constexpr uint64_t uint64_min = (std::numeric_limits<uint64_t>::min)();
constexpr uint64_t uint64_max = (std::numeric_limits<uint64_t>::max)();
} // namespace star

#define STAR_CHECK_NODE(node, obj, attribute)                                  \
    if (!node[attribute]) {                                                    \
        ::star::Log::error("{} missing {} attribute", obj, attribute);         \
        return false;                                                          \
    }
#endif