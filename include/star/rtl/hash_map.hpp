#ifndef STAR_HASH_MAP_HPP
#define STAR_HASH_MAP_HPP

#include <tbb/concurrent_unordered_map.h>
#include <unordered_map>

namespace star {
template <typename K, typename V> using HashMap = std::unordered_map<K, V>;
template <typename K, typename V>
using HashMultimap = std::unordered_multimap<K, V>;

template <typename K, typename V>
using SafeHashMap = tbb::concurrent_unordered_map<K, V>;
template <typename K, typename V>
using SafeHashMultimap = tbb::concurrent_unordered_multimap<K, V>;
} // namespace star

#endif // STAR_HASH_MAP_HPP
