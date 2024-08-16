#include "star/function/filesystem/path.hpp"

namespace star {
String Path::_root{};

void Path::init(star::StringView root) { _root = root; }

String Path::pathConvert(StringView path) {

    if (path.substr(0, 6) == "res://") {
        String str = _root;
        StringView sv(path.data() + 6, path.size() - 6);
        str.append(sv.data(), sv.size());
        return str;
    }
    return String{path};
}
} // namespace star