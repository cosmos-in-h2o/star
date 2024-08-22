#ifndef STAR_MAP_HPP
#define STAR_MAP_HPP

#include <tbb/concurrent_map.h>
#include <map>

namespace star{
template <typename K, typename V> using Map = std::map<K, V>;
template <typename K, typename V>
using Multimap = std::multimap<K, V>;

template <typename K, typename V>
using SafeMap = tbb::concurrent_map<K, V>;
template <typename K, typename V>
using SafeMultimap = tbb::concurrent_multimap<K, V>;
}

#endif // STAR_MAP_HPP
