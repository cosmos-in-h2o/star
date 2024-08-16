#include "star/resource/loader.hpp"
#include "star/core/io/log.hpp"
#include "star/function/filesystem/path.hpp"
#include <fstream>

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
} // namespace star