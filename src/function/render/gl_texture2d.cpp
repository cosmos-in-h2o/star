#include "star/function/render/gl_texture2d.hpp"
#include "star/def.hpp"
#include "star/function/filesystem/path.hpp"
#include "star/resource/loader.hpp"

namespace star {
GLTexture2D::GLTexture2D(const Texture2D &texture, bool isLinear, bool mipmap) {
    width = texture.width;
    height = texture.height;
    channels = texture.channels;

    glGenTextures(1, &_textureID);
    glBindTexture(GL_TEXTURE_2D, _textureID);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    if (mipmap && isLinear) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                        GL_LINEAR_MIPMAP_LINEAR);
        glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    } else if (mipmap) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                        GL_NEAREST_MIPMAP_NEAREST);
        glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    } else if (isLinear) {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    } else {
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTextureParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    }
    if (texture.channels == 4) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texture.width, texture.height,
                     0, GL_RGBA, GL_UNSIGNED_BYTE, texture.data);
    } else if (texture.channels == 3) {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, texture.width, texture.height, 0,
                     GL_RGB, GL_UNSIGNED_BYTE, texture.data);
    }
    if (mipmap) {
        glGenerateMipmap(GL_TEXTURE_2D);
    }
}

GLTexture2D::GLTexture2D(const String &path) {
    YAML::Node root = YAML::LoadFile(path);
}

GLTexture2D::~GLTexture2D() = default;

bool GLTexture2D::checkNode(const YAML::Node &node, const String &obj) {
    STAR_CHECK_NODE(node, obj, "name")
    STAR_CHECK_NODE(node, obj, "linear")
    STAR_CHECK_NODE(node, obj, "mipmap")
    STAR_CHECK_NODE(node, obj, "texture")
    auto &textureNode = node["texture"];
    STAR_CHECK_NODE(textureNode, obj + ".texture", "name")
    STAR_CHECK_NODE(textureNode, obj + ".texture", "path")
    return true;
}

GLTexture2D *GLTexture2D::createFromFile(StringView path) {
    auto node = YAML::LoadFile(Path::pathConvert(path));
    return createFromNode(node);
}

GLTexture2D *GLTexture2D::createFromNode(const YAML::Node &node) {
    if (!checkNode(node)) {
        return nullptr;
    }
    auto &textureNode = node["texture"];
    auto texture = ResourceManager::loadResource<Texture2D>(
        textureNode["name"].as<String>(),
        Loader::loadTexture2D(textureNode["path"].as<String>()));

    return ResourceManager::emplaceLoadStaticResource<GLTexture2D>(
        node["name"].as<String>(), texture.operator*(),
        node["linear"].as<bool>(), node["mipmap"].as<bool>());
}
} // namespace star