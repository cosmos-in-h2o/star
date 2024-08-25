#ifndef STAR_DEFAULT_BIND_HPP
#define STAR_DEFAULT_BIND_HPP

namespace star {
class DefaultBind {
  public:
    static void starBindFunc_int8_t();
    static void starBindFunc_int16_t();
    static void starBindFunc_int32_t();
    static void starBindFunc_int64_t();
    static void starBindFunc_uint8_t();
    static void starBindFunc_uint16_t();
    static void starBindFunc_uint32_t();
    static void starBindFunc_uint64_t();
    static void starBindFunc_float();
    static void starBindFunc_double();
    static void starBindFunc_char8_t();
    static void starBindFunc_star_String();
    static void starBindFunc_star_U8String();
    static void starBindFunc_star_vec2();
    static void starBindFunc_star_vec3();
    static void starBindFunc_star_vec4();
    static void starBindFunc_star_mat4();
    static void starBindFunc_Components();
};
} // namespace star

#endif // STAR_DEFAULT_BIND_HPP
