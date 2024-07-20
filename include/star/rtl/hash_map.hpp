#ifndef STAR_HASH_MAP_HPP
#define STAR_HASH_MAP_HPP

#include <unordered_map>

namespace star {
    template<typename K, typename V>
    using HashMap = std::unordered_map <K, V>;
}

#endif //STAR_HASH_MAP_HPP
