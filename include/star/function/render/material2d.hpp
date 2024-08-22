#ifndef STAR_MATERIAL2D_HPP
#define STAR_MATERIAL2D_HPP

#include "star/function/render/gl_texture2d.hpp"
#include "star/function/render/shader.hpp"
#include "star/resource/resource.hpp"
#include <yaml-cpp/yaml.h>

namespace star {
struct Material2D : public Resource {
    Material2D();
    Material2D(GLTexture2D *texture, Shader *shader);
    ~Material2D() override;
    GLTexture2D *texture{};
    Shader *shader{};

    static bool checkNode(const YAML::Node&node,const String&obj="Material2D");
    static Material2D* createFromFile(StringView path);
    static Material2D* createFromNode(const YAML::Node&node);
};
} // namespace star

#endif // STAR_MATERIAL2D_HPP
