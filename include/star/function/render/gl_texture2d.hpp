#ifndef STAR_GL_TEXTURE2D_HPP
#define STAR_GL_TEXTURE2D_HPP

#include "star/driver/opengl/gl_common.hpp"
#include "star/resource/resource_manager.hpp"
#include "star/resource/texture2d.hpp"
#include <yaml-cpp/yaml.h>

namespace star {
class GLTexture2D : public Resource {
  public:
    GLTexture2D();
    explicit GLTexture2D(const Texture2D &texture, bool isLinear = true,
                         bool mipmap = true);
    ~GLTexture2D() override;

    GLuint getTextureID() const { return _textureID; }

    void bind() const { glBindTexture(GL_TEXTURE_2D, _textureID); }
    void unbind() const { glBindTexture(GL_TEXTURE_2D, 0); }

    int32_t width{}, height{}, channels{};

    static bool checkNode(const YAML::Node&node,const String&obj="GLTexture2D");
    static Ref<GLTexture2D>createFromFile(StringView path);
    static Ref<GLTexture2D>createFromNode(const YAML::Node &node);

  private:
    GLuint _textureID{};
};
} // namespace star

#endif // STAR_GL_TEXTURE2D_HPP