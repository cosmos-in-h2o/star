#include "star/ecs/component/sprite.hpp"

namespace star {
Sprite::Sprite() = default;

Sprite::Sprite(Transform2D *transform, GLTexture2D *texture, Shader *shader)
    : transform(transform), texture(texture), shader(shader) {}

Sprite::~Sprite() {
    if (_vbo != 0)
        glDeleteBuffers(1, &_vbo);
    if (_ebo != 0)
        glDeleteBuffers(1, &_ebo);
    if (_vao != 0)
        glDeleteVertexArrays(1, &_vao);
}

void Sprite::draw(const mat4 &viewProjectionMat) {
    glBindVertexArray(_vao);
    shader->use();
    texture->bind();

    auto mat = viewProjectionMat *
               (transform ? transform->getModelMatrix() : mat4(1.0)) *
               star::scale(mat4(1.0), vec3{size.x / 2, size.y / 2, 1});

    shader->setUniformMatrix4fv("MVPMatrix", mat);
    shader->setUniform4f("spriteColor", color[0], color[1], color[2], color[3]);

    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
}

void Sprite::bindVertex() {
    float vertices[] = {
        -1,   -1, uv.x,
        uv.w, // 左上
        1,    -1, uv.z,
        uv.w, // 右上
        -1,   1,  uv.x,
        uv.y, // 左下
        1,    1,  uv.z,
        uv.y // 右下
    };
    uint32_t indices[] = {0, 1, 2, 3, 2, 1};

    glGenVertexArrays(1, &_vao);
    glBindVertexArray(_vao);

    glGenBuffers(1, &_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, _vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glGenBuffers(1, &_ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices,
                 GL_STATIC_DRAW);

    vertexAttribBind(VertexLayout::P2fT2f);
}
} // namespace star