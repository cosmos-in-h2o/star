#ifndef STAR_GAME_HPP
#define STAR_GAME_HPP

#include "star/driver/opengl/framebuffer.hpp"
#include "star/tool/imgui/imgui.hpp"

void GameSpace(star::Framebuffer &framebuffer, star::Camera &camera,
               star::ivec4 &viewport, star::vec2 &framebufferSize);

#endif // STAR_GAME_HPP