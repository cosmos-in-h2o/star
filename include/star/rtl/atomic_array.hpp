#ifndef STAR_ATOMIC_ARRAY_HPP
#define STAR_ATOMIC_ARRAY_HPP

#include "star/resource/resource_info.hpp"
#include <array>

namespace star {
template <class T, size_t s> class AtomicArray {
  public:
    AtomicArray();
    AtomicArray(std::initializer_list<T> list);

    void push(T &&value);
    size_t get_pos();
    size_t size();
    bool empty();
    void reset(size_t pos = 0);
    void clear();
    T &at(size_t index);

    T &operator[](size_t index);
    std::array<T, s>::iterator begin();
    std::array<T, s>::iterator end();
    std::array<T, s>::iterator rbegin();
    std::array<T, s>::iterator rend();

  private:
    std::array<T, s> _array{};
    SafeNumeric<size_t> _pos{0};
};

template <class T, size_t s> AtomicArray<T, s>::AtomicArray() = default;

template <class T, size_t s>
AtomicArray<T, s>::AtomicArray(std::initializer_list<T> list) : _array(list) {}

template <class T, size_t s> void AtomicArray<T, s>::push(T &&value) {
    size_t index = _pos.postincrement();
    if (index < size()) {
        _array[index] = std::forward<T>(value);
    } else {
        Log::warn("array is full, but you're still trying add element.");
    }
}

template <class T, size_t s> size_t AtomicArray<T, s>::get_pos() {
    return _pos.get();
}

template <class T, size_t s> size_t AtomicArray<T, s>::size() {
    return _array.size();
}

template <class T, size_t s> bool AtomicArray<T, s>::empty() {
    return _pos.get() == 0;
}

template <class T, size_t s> void AtomicArray<T, s>::reset(size_t pos) {
    _pos.set(pos);
}

template <class T, size_t s> void AtomicArray<T, s>::clear() {
    reset(0);
}

template <class T, size_t s> T &AtomicArray<T, s>::at(size_t index) {
    return _array.at(index);
}

template <class T, size_t s> T &AtomicArray<T, s>::operator[](size_t index) {
    return _array[index];
}

template <class T, size_t s>
std::array<T, s>::iterator AtomicArray<T, s>::begin() {
    return _array.begin();
}

template <class T, size_t s>
std::array<T, s>::iterator AtomicArray<T, s>::end() {
    return _array.end();
}

template <class T, size_t s>
std::array<T, s>::iterator AtomicArray<T, s>::rbegin() {
    return _array.rbegin();
}

template <class T, size_t s>
std::array<T, s>::iterator AtomicArray<T, s>::rend() {
    return _array.rend();
}
} // namespace star

#endif // STAR_ATOMIC_ARRAY_HPP
