#ifndef STAR_SHADER_HPP
#define STAR_SHADER_HPP

#include "star/core/io/log.hpp"
#include "star/core/math/linear.hpp"
#include "star/driver/opengl/gl_common.hpp"
#include "star/resource/loader.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
#include <yaml-cpp/yaml.h>
#include <string>

namespace star {
class Shader : public Resource {
  public:
    Shader(StringView vertex, StringView fragment);
    ~Shader() override;

    void use() const { glUseProgram(_programID); }
    void unuse() const { glUseProgram(0); }

    GLuint getProgramID() const { return _programID; }

    void setUniform1f(const std::string &name, float value) {
        use();
        glUniform1f(getUniformLocation(name), value);
    }
    void setUniform1i(const String &name, int value) {
        use();
        glUniform1i(getUniformLocation(name), value);
    }
    void setUniform3f(const String &name, float v0, float v1, float v2) {
        use();
        glUniform3f(getUniformLocation(name), v0, v1, v2);
    }
    void setUniform4f(const String &name, float v0, float v1, float v2,
                      float v3) {
        use();
        glUniform4f(getUniformLocation(name), v0, v1, v2, v3);
    }
    void setUniformMatrix4fv(const String &name, mat4 &value) {
        use();
        glUniformMatrix4fv(getUniformLocation(name), 1, GL_FALSE,
                           value_ptr(value));
    }

    static bool checkNode(const YAML::Node&node,const String&obj="Shader");
    static Shader*createFromFile(StringView path);
    static Shader*createFromNode(const YAML::Node &node);

  private:
    GLuint _programID;
    SafeHashMap<String, GLint> _uniformCache;

    static GLuint compileShader(GLenum type, const char *source);
    GLint getUniformLocation(const String &name);
};
} // namespace star

#endif // STAR_SHADER_HPP