#version 460 core
layout(location = 0) in vec2 a_Position;
layout(location = 1) in vec2 a_TexCoord;

uniform mat4 MVPMatrix;

out vec2 v_TexCoord;

void main(){
    v_TexCoord = a_TexCoord;
	gl_Position = MVPMatrix * vec4(a_Position,0.0 , 1.0);
}
