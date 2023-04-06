#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

namespace NNGraphics{
    class Rectangle{
        private:
        Shader shader;
        unsigned int EBO;
        unsigned int VBO;
        unsigned int VAO;
        float vertices[32] = {
            0.5f,  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // right 
            0.5f, 0.5f, 0.0f, 0.0f, 0.0f, 0.0f,  // top  
            0.0f, 0.5f, 0.0f,  0.0f, 0.0f, 0.0f, 
            0.0f,  0.0f, 0.0f,  0.0f, 0.0f, 0.0f,
        };

        unsigned int indices[6]  = {
            0,1,3,
            1,2,3
        };

        public:
        Rectangle();
        Rectangle(const char* vertexPath, const char* fragmentPath);
        ~Rectangle();
        //function to call when we want to display rectangle on the screen.
        void display(const std::vector<float>& position,const std::vector<float>& color);

        private:

        //initialize and bind vbo, vao, ebo
        void createContext();
    };
};

#endif