#ifndef STAR_HASH_SET_HPP
#define STAR_HASH_SET_HPP

#include <tbb/concurrent_unordered_set.h>
#include <unordered_set>

namespace star {
template <class E> using HashSet = std::unordered_set<E>;
template <class E> using HashMultiset = std::unordered_multiset<E>;

template <class E> using SafeHashSet = tbb::concurrent_unordered_set<E>;
template <class E>
using SafeHashMultiset = tbb::concurrent_unordered_multiset<E>;
} // namespace star

#endif // STAR_HASH_SET_HPP
