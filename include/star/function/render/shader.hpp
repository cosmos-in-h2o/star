#ifndef STAR_SHADER_HPP
#define STAR_SHADER_HPP

#include "star/core/io/log.hpp"
#include "star/driver/opengl/gl_common.hpp"
#include "star/resource/loader.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
#include <string>

namespace star {
class Shader {
  public:
    Shader(StringView vertex, StringView fragment);
    ~Shader();

    void use() const { glUseProgram(_programID); }

    GLuint getProgramID() const { return _programID; }

    void setUniform1f(const std::string &name, float value) {
        glUniform1f(getUniformLocation(name), value);
    }
    void setUniform1i(const String &name, int value) {
        glUniform1i(getUniformLocation(name), value);
    }
    void setUniform3f(const String &name, float v0, float v1, float v2) {
        glUniform3f(getUniformLocation(name), v0, v1, v2);
    }
    void setUniform4f(const String &name, float v0, float v1, float v2,
                      float v3) {
        glUniform4f(getUniformLocation(name), v0, v1, v2, v3);
    }
    void setUniformMatrix4fv(const String &name, const float *value,
                             bool transpose = false) {
        glUniformMatrix4fv(getUniformLocation(name), 1,
                           transpose ? GL_TRUE : GL_FALSE, value);
    }

  private:
    GLuint _programID;
    HashMap<String, GLint> _uniformCache;

    static GLuint compileShader(GLenum type, const char *source);
    GLint getUniformLocation(const String &name);
};
} // namespace star

#endif // STAR_SHADER_HPP