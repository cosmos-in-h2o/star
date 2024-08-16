#ifndef STAR_RESOURCE_INFO_HPP
#define STAR_RESOURCE_INFO_HPP

#include "star/resource/resource.hpp"
#include <atomic>

namespace star {
//这个类是抄的godot的代码
template <typename T> class SafeNumeric {
    std::atomic<T> value;
    static_assert(std::atomic<T>::is_always_lock_free);

  public:
    void set(T p_value) { value.store(p_value, std::memory_order_release); }
    T get() const { return value.load(std::memory_order_acquire); }
    T increment() { return value.fetch_add(1, std::memory_order_acq_rel) + 1; }
    // Returns the original value instead of the new one
    T postincrement() { return value.fetch_add(1, std::memory_order_acq_rel); }
    T decrement() { return value.fetch_sub(1, std::memory_order_acq_rel) - 1; }
    // Returns the original value instead of the new one
    T postdecrement() { return value.fetch_sub(1, std::memory_order_acq_rel); }
    T add(T p_value) {
        return value.fetch_add(p_value, std::memory_order_acq_rel) + p_value;
    }
    // Returns the original value instead of the new one
    T postadd(T p_value) {
        return value.fetch_add(p_value, std::memory_order_acq_rel);
    }
    T sub(T p_value) {
        return value.fetch_sub(p_value, std::memory_order_acq_rel) - p_value;
    }
    T bit_or(T p_value) {
        return value.fetch_or(p_value, std::memory_order_acq_rel);
    }
    T bit_and(T p_value) {
        return value.fetch_and(p_value, std::memory_order_acq_rel);
    }
    T bit_xor(T p_value) {
        return value.fetch_xor(p_value, std::memory_order_acq_rel);
    }
    // Returns the original value instead of the new one
    T postsub(T p_value) {
        return value.fetch_sub(p_value, std::memory_order_acq_rel);
    }
    T exchange_if_greater(T p_value) {
        while (true) {
            T tmp = value.load(std::memory_order_acquire);
            if (tmp >= p_value) {
                return tmp; // already greater, or equal
            }
            if (value.compare_exchange_weak(tmp, p_value,
                                            std::memory_order_acq_rel)) {
                return p_value;
            }
        }
    }
    T conditional_increment() {
        while (true) {
            T c = value.load(std::memory_order_acquire);
            if (c == 0) {
                return 0;
            }
            if (value.compare_exchange_weak(c, c + 1,
                                            std::memory_order_acq_rel)) {
                return c + 1;
            }
        }
    }
    explicit SafeNumeric(T p_value = static_cast<T>(0)) { set(p_value); }
};

struct ResourceInfo {
    ResourceInfo();
    explicit ResourceInfo(Resource*resource);
    ResourceInfo(const ResourceInfo&info);
    ResourceInfo& operator=(const ResourceInfo&info);
    uint64_t operator++();
    uint64_t operator--();

    Resource *resource = nullptr;
    SafeNumeric<uint64_t> refCount{};
};
} // namespace star

#endif // STAR_RESOURCE_INFO_HPP
