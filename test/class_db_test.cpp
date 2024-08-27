#include "star/star.hpp"
#include <iostream>

using namespace star;

int main() {
    star::Log::init("test");
    star::DefaultBind::starBindFunc();
    star::Transform2D transform;
    YAML::Node node;
    star::ClassDB::componentSerialize["star::Transform2D"](&transform, node);
    std::cout << node << std::endl;
    star::Transform2D transform2D;
    std::unique_ptr<Window> window(
        new WindowsWindow("StarEditor", 1280, 720, nullptr));
    OpenGLContext context(window.get());
    ImGUI::init(window.get());
    window->setVSync(1);
    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();
        ImGUI::begin();

        ImGui::Begin("test");
        star::ClassDB::componentEditorUI["star::Transform2D"](&transform);
        ImGui::End();

        ImGUI::end();
    }
    ImGUI::close();
    return 0;
}
