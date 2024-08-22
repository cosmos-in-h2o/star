#ifndef STAR_LIST_HPP
#define STAR_LIST_HPP

#include <algorithm>
#include <tbb/concurrent_vector.h>
#include <vector>

namespace star {
template <typename T> using List = std::vector<T>;
template <typename T> using SafeList = tbb::concurrent_vector<T>;

using std::sort;
} // namespace star

#endif // STAR_LIST_HPP
