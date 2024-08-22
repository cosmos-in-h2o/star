#include "star/resource/loader.hpp"
#include "star/core/io/log.hpp"
#include "star/function/filesystem/path.hpp"
#include <fstream>
#include <stb_image.h>

namespace star {
String Loader::loadString(star::StringView path) {
    String absolutePath = Path::pathConvert(path);
    std::ifstream file(absolutePath.c_str(), std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        Log::error("Failed to open file :{}", path);
        return String{};
    }
    // 获取文件大小
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);

    String content(size, '\0');
    if (!file.read(&content[0], size)) {
        Log::error("Failed to read file content");
        file.close();
        return String{}; // 返回空字符串表示出错
    }
    file.close();
    return content;
}

Texture2D *Loader::loadTexture2D(StringView path) {
    String absolutePath = Path::pathConvert(path);
    auto texture = new Texture2D;
    stbi_set_flip_vertically_on_load(1);
    texture->data = stbi_load(absolutePath.c_str(), &texture->width,
                              &texture->height, &texture->channels, 0);
    if (texture->data) {
        texture->size = texture->width * texture->height * texture->channels;
        return texture;
    } else {
        Log::error("Failed to load Texture2D: {}", path);
        return nullptr;
    }
}
} // namespace star