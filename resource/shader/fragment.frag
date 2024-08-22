#version 460 core
out vec4 color;
in vec2 v_TexCoord;

uniform vec4 spriteColor;
uniform sampler2D u_Texture; // 采样纹理的纹理单元

void main(){
    color = texture(u_Texture, v_TexCoord)*spriteColor;	// 采样
}