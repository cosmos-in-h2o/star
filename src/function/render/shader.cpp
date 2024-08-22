#include "star/function/render/shader.hpp"
#include "star/def.hpp"
#include "star/function/filesystem/path.hpp"
#include "star/resource/resource_manager.hpp"

namespace star {
Shader::Shader(star::StringView vertex, star::StringView fragment) {
    String vertexSource = std::move(Loader::loadString(vertex));
    String fragmentSource = std::move(Loader::loadString(fragment));
    // 创建着色器程序
    _programID = glCreateProgram();
    // 编译顶点着色器
    GLuint vertexShader = compileShader(GL_VERTEX_SHADER, vertexSource.c_str());
    glAttachShader(_programID, vertexShader);

    // 编译片段着色器
    GLuint fragmentShader =
        compileShader(GL_FRAGMENT_SHADER, fragmentSource.c_str());
    glAttachShader(_programID, fragmentShader);
    // 链接着色器程序
    glLinkProgram(_programID);
    // 检查链接状态
    GLint success;
    glGetProgramiv(_programID, GL_LINK_STATUS, &success);
    if (!success) {
        char infoLog[512];
        glGetProgramInfoLog(_programID, 512, NULL, infoLog);
        Log::error("Shader program linking failed: ", infoLog);
    }
    // 删除着色器对象，程序链接后不再需要
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
}

Shader::~Shader() { glDeleteProgram(_programID); }

GLuint Shader::compileShader(GLenum type, const char *source) {
    GLuint shader = glCreateShader(type);
    const char *sourceCStr = source;
    glShaderSource(shader, 1, &sourceCStr, nullptr);
    glCompileShader(shader);
    // 检查编译状态
    GLint success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        char infoLog[512];
        glGetShaderInfoLog(shader, 512, nullptr, infoLog);
        Log::error("Shader compilation failed: {}", infoLog);
    }
    return shader;
}

GLint Shader::getUniformLocation(const String &name) {
    // 尝试从缓存中获取 uniform 变量的位置
    auto it = _uniformCache.find(name);
    if (it != _uniformCache.end()) {
        return it->second;
    }
    // 如果缓存中没有，调用 glGetUniformLocation，并将结果存入缓存
    GLint location = glGetUniformLocation(_programID, name.c_str());
    if (location == -1) {
        Log::error("Uniform variable not found: {}", name);
        return location;
    }
    _mutex.lock();
    _uniformCache[name] = location;
    _mutex.unlock();
    return location;
}

bool Shader::checkNode(const YAML::Node &node, const String &obj) {
    STAR_CHECK_NODE(node, obj, "name")
    STAR_CHECK_NODE(node, obj, "vertex")
    STAR_CHECK_NODE(node, obj, "fragment")
    return true;
}

Shader *Shader::createFromFile(StringView path) {
    auto node = YAML::LoadFile(Path::pathConvert(path));
    return createFromNode(node);
}

Shader *Shader::createFromNode(const YAML::Node &node) {
    if (!checkNode(node)) {
        return nullptr;
    }
    return ResourceManager::emplaceLoadStaticResource<Shader>(
        node["name"].as<String>(), node["vertex"].as<String>(),
        node["fragment"].as<String>());
}
} // namespace star