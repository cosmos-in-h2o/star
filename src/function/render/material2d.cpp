#include "star/function/render/material2d.hpp"
#include "star/def.hpp"
#include "star/function/filesystem/path.hpp"

namespace star {
Material2D::Material2D() = default;

Material2D::Material2D(const Ref<GLTexture2D> &texture, Shader *shader)
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

Ref<Material2D> Material2D::createFromFile(StringView path) {
    auto node = YAML::LoadFile(Path::pathConvert(path));
    return createFromNode(node);
}

Ref<Material2D> Material2D::createFromNode(const YAML::Node &node) {
    if (!checkNode(node)) {
        return {};
    }
    auto &glTextureNode = node["glTexture"];
    auto &shaderNode = node["shader"];
    return ResourceManager::emplaceLoadResource<Material2D>(
        node["name"].as<String>(), GLTexture2D::createFromNode(glTextureNode),
        Shader::createFromNode(shaderNode));
}
void Material2D::use(mat4 &MVPMatrix, Color &color) {
    shader->use();
    texture->bind();
    shader->setUniformMatrix4fv("MVPMatrix", MVPMatrix);
    shader->setUniform4f("spriteColor", color[0], color[1], color[2], color[3]);
}

void Material2D::unuse() {}
} // namespace star