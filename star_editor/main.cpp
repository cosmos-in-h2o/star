#include "star/star.hpp"

using namespace star;

int main(int argc, char **argv) {
    Log::init("StarEditor");
    std::unique_ptr<Window> window(new WindowsWindow("StarEditor", 1280, 720));
    OpenGLContext context(window.get());
    ImGUI::init(window.get());
    while (!window->shouldClose()) {
        glfwPollEvents();
        context.swapBuffer();
        window->clear();
        ImGUI::begin();
        ImGui::Begin("hello world");
        if (ImGui::Button("click me")) {
            Log::trace("hello world");
        }
        ImGui::End();
        ImGUI::end();
    }
    ImGUI::close();
    return 0;
}
