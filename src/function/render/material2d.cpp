#include "star/function/render/material2d.hpp"
#include "star/def.hpp"
#include "star/function/filesystem/path.hpp"

namespace star {
Material2D::Material2D() = default;

Material2D::Material2D(GLTexture2D *texture, Shader *shader)
    : texture(texture), shader(shader) {}

Material2D::~Material2D() = default;

bool Material2D::checkNode(const YAML::Node &node, const String &obj) {
    STAR_CHECK_NODE(node, obj, "name");
    STAR_CHECK_NODE(node, obj, "glTexture");
    STAR_CHECK_NODE(node, obj, "shader");
    auto &glTextureNode = node["glTexture"];
    auto &shaderNode = node["shader"];
    GLTexture2D::checkNode(glTextureNode, obj + ".GLTexture2D");
    Shader::checkNode(shaderNode, obj + ".Shader");
    return true;
}

Material2D *Material2D::createFromFile(StringView path) {
    auto node = YAML::LoadFile(Path::pathConvert(path));
    return createFromNode(node);
}

Material2D *Material2D::createFromNode(const YAML::Node &node) {
    if (!checkNode(node)) {
        return nullptr;
    }
    auto &glTextureNode = node["glTexture"];
    auto &shaderNode = node["shader"];
    return ResourceManager::emplaceLoadStaticResource<Material2D>(
        node["name"].as<String>(), GLTexture2D::createFromNode(glTextureNode),
        Shader::createFromNode(shaderNode));
}
} // namespace star