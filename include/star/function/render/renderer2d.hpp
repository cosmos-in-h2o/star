#ifndef STAR_RENDERER2D_HPP
#define STAR_RENDERER2D_HPP

#include "star/driver/opengl/vertex_array.hpp"
#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/sprite.hpp"
#include "star/function/render/color.hpp"
#include "star/function/render/gl_texture2d.hpp"
#include "star/function/render/renderable.hpp"
#include "star/function/render/shader.hpp"
#include "star/resource/resource_info.hpp"
#include "star/rtl/atomic_array.hpp"
#include "star/rtl/hash_map.hpp"
#include <mutex>

namespace star {
struct RenderTarget2D {
    Renderable *renderTarget;
    uint32_t order;
};

class Renderer2D {
  public:
    static void init(Camera *camera);
    static void submit(Renderable *renderTarget, uint32_t order = 0xff);
    static void setCamera(Camera *camera) { _camera = camera; };

    static void begin();
    static void end();

  private:
    static Camera *_camera;
    static AtomicArray<RenderTarget2D, 2048> _renderList;
    static mat4 _viewProjectionMat;
};
} // namespace star
#endif // STAR_RENDERER2D_HPP