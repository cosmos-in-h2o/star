#include "star/function/render/renderer2d.hpp"
#include <tbb/tbb.h>

namespace star {
Camera *Renderer2D::_camera{};
AtomicArray<RenderTarget2D, 2048> Renderer2D::_renderList;
mat4 Renderer2D::_viewProjectionMat = mat4(1.0);

void Renderer2D::init(Camera *camera) {
    // 开启混合
    glEnable(GL_BLEND);
    // 混合函数
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    _camera = camera;
}

void Renderer2D::submit(Renderable *renderTarget, uint32_t order) {
    _renderList.push({renderTarget, order});
}

void Renderer2D::begin() {
    _viewProjectionMat = _camera->getViewProjectionMat();
}

void Renderer2D::end() {
    auto end =
        _renderList.begin() + static_cast<int64_t>(_renderList.get_pos());
    // 多线程排序
    tbb::parallel_sort(_renderList.begin(), end,
                       [](const RenderTarget2D &a, const RenderTarget2D &b) {
                           return a.order < b.order;
                       });
    for (int i = 0; i < _renderList.get_pos(); i++) {
        if (_renderList[i].renderTarget) {
            _renderList[i].renderTarget->draw(_viewProjectionMat);
        }
    }
    _renderList.clear();
}
} // namespace star