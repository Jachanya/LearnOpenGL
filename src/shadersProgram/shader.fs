#version 330 core

in vec3 ourColor;
out vec4 FragColor;

uniform vec3 rectColor;

void main()
{
    FragColor = vec4(rectColor, 1.0);
}