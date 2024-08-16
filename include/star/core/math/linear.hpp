#ifndef STAR_LINEAR_HPP
#define STAR_LINEAR_HPP

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/quaternion.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace star {
// Vec types
using glm::dvec2;
using glm::dvec3;
using glm::dvec4;
using glm::ivec2;
using glm::ivec3;
using glm::ivec4;
using glm::uvec2;
using glm::uvec3;
using glm::uvec4;
using glm::vec2;
using glm::vec3;
using glm::vec4;

// Mat types
using glm::dmat2;
using glm::dmat3;
using glm::dmat4;
using glm::mat2;
using glm::mat3;
using glm::mat4;

// Quaternions
using glm::dquat;
using glm::quat;

// Basic functions
using glm::abs;
using glm::acos;
using glm::asin;
using glm::atan;
using glm::ceil;
using glm::clamp;
using glm::cos;
using glm::degrees;
using glm::exp;
using glm::exp2;
using glm::floor;
using glm::inversesqrt;
using glm::isinf;
using glm::isnan;
using glm::log;
using glm::log2;
using glm::max;
using glm::min;
using glm::mix;
using glm::mod;
using glm::ortho;
using glm::pow;
using glm::radians;
using glm::sin;
using glm::smoothstep;
using glm::sqrt;
using glm::step;
using glm::tan;

// Matrix functions
using glm::determinant;
using glm::inverse;
using glm::transpose;

// Vector relational functions
using glm::all;
using glm::any;
using glm::equal;
using glm::greaterThan;
using glm::greaterThanEqual;
using glm::lessThan;
using glm::lessThanEqual;
using glm::not_;
using glm::notEqual;

// Vector math functions
using glm::cross;
using glm::distance;
using glm::dot;
using glm::length;
using glm::normalize;
using glm::reflect;
using glm::refract;

// Matrix transformations
using glm::lookAt;
using glm::perspective;
using glm::rotate;
using glm::scale;
using glm::translate;

// Quaternions
using glm::angleAxis;
using glm::mat3_cast;
using glm::mat4_cast;
using glm::quat_cast;

// Type pointers
using glm::value_ptr;
} // namespace star

#endif // STAR_LINEAR_HPP
