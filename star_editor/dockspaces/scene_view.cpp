#include "scene_view.hpp"
#include "star/core/math/linear.hpp"

using namespace star;

void SceneView::draw() const {
    ImGui::SetNextWindowSizeConstraints(ImVec2(960, 540),
                                        ImVec2(FLT_MAX, FLT_MAX));
    ImGui::Begin("my window");
    ImVec2 viewportPanelSize = ImGui::GetContentRegionAvail();
    if (framebuffer->getSize() !=
        *((vec2 *)&viewportPanelSize)) { // 改变了窗口大小

        auto viewPort =
            camera->getViewport({viewportPanelSize.x, viewportPanelSize.y});
        // 调整帧缓冲区大小
        framebuffer->resize(*((vec2 *)&viewportPanelSize));
        *framebufferSize = framebuffer->getSize();
        *viewport =
            camera->getViewport({viewportPanelSize.x, viewportPanelSize.y});
    }

    ImGui::Image((void *)(framebuffer->getTexture()),
                 ImVec2{framebufferSize->x, framebufferSize->y}, ImVec2(0, 1),
                 ImVec2(1, 0));
    ImGui::End();
}
