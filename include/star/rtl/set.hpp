#ifndef STAR_SET_HPP
#define STAR_SET_HPP

#include <set>
#include <tbb/concurrent_set.h>

namespace star {
template <class E> using Set = std::set<E>;
template <class E> using Multiset = std::multiset<E>;

template <class E> using SafeSet = tbb::concurrent_set<E>;
template <class E> using SafeMultiset = tbb::concurrent_multiset<E>;
} // namespace star
#endif // STAR_SET_HPP