// 必须最先导入
#include "star/driver/opengl/gl_common.hpp"
// order

#include "star/concept.hpp"
#include "star/def.hpp"

// core
#include "star/core/ecs/scene.hpp"
#include "star/core/error/error.hpp"
#include "star/core/event/ecs_event.hpp"
#include "star/core/event/event.hpp"
#include "star/core/event/event_dispatcher.hpp"
#include "star/core/event/input_event.hpp"
#include "star/core/game.hpp"
#include "star/core/io/input.hpp"
#include "star/core/io/log.hpp"
#include "star/core/math/linear.hpp"
#include "star/core/os/key.hpp"
#include "star/core/time_step.hpp"
#include "star/core/window.hpp"
// #include "star/core/"

// driver
#include "star/driver/opengl/index_buffer.hpp"
#include "star/driver/opengl/opengl_context.hpp"
#include "star/driver/opengl/vertex_array.hpp"
#include "star/driver/opengl/vertex_buffer.hpp"
#include "star/driver/opengl/vertex_layout.hpp"
// #include "star/driver/

// ecs
#include "star/ecs/component/camera.hpp"
#include "star/ecs/component/camera2d.hpp"
#include "star/ecs/component/component.hpp"
#include "star/ecs/component/sprite.hpp"
#include "star/ecs/component/transform2d.hpp"
#include "star/ecs/component/transform3d.hpp"
#include "star/ecs/system/sprite_system.hpp"
// #include"star/ecs/

// function
#include "star/function/filesystem/path.hpp"
#include "star/function/render/color.hpp"
#include "star/function/render/gl_texture2d.hpp"
#include "star/function/render/material2d.hpp"
#include "star/function/render/renderable.hpp"
#include "star/function/render/renderer2d.hpp"
#include "star/function/render/shader.hpp"
// #include"star/function/

// platform
#include "star/platform/windows/windows_window.hpp"

// resource
#include "star/resource/collector.hpp"
#include "star/resource/loader.hpp"
#include "star/resource/ref.hpp"
#include "star/resource/resource.hpp"
#include "star/resource/resource_info.hpp"
#include "star/resource/resource_manager.hpp"
#include "star/resource/texture2d.hpp"
// #include"star/resource/

// rtl
#include "star/rtl/atomic_array.hpp"
#include "star/rtl/atomic_queue.hpp"
#include "star/rtl/hash_map.hpp"
#include "star/rtl/hash_set.hpp"
#include "star/rtl/list.hpp"
#include "star/rtl/map.hpp"
#include "star/rtl/set.hpp"
#include "star/rtl/string.hpp"
#include "star/rtl/string_view.hpp"
// #include "star/rtl"

// tool
#include "star/tool/application.hpp"
#include "star/tool/class_db.hpp"
#include "star/tool/class_db_macro.hpp"
#include "star/tool/default_bind.hpp"
#include "star/tool/imgui/imgui.hpp"
// #include"star/tool/
