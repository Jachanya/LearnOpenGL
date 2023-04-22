#ifndef _RECTANGLE_GRAPHICS_H_
#define _RECTANGLE_GRAPHICS_H_

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>

#include "shader.hpp"
#include "entity.hpp"
#include "component.hpp"

namespace jachan
{

    class RectangleGraphicsComponent : public GraphicsComponent
    {
        private:
        Shader shader;
        unsigned int EBO;
        unsigned int VBO;
        unsigned int VAO;
        // float vertices[32] = {
        //     0.05f,  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // right 
        //     0.05f, 0.05f, 0.0f, 0.0f, 0.0f, 0.0f,  // top  
        //     0.0f, 0.05f, 0.0f,  0.0f, 0.0f, 0.0f, 
        //     0.0f,  0.0f, 0.0f,  0.0f, 0.0f, 0.0f,
        // };

        float vertices[32] = {
            // positions          // texture coords
            0.1f,  0.1f, 0.0f,   1.0f, 1.0f, 0.0f, // top right
            0.1f, -0.1f, 0.0f,   1.0f, 0.0f, 0.0f,// bottom right
            -0.1f, -0.1f, 0.0f,   0.0f, 0.0f, 0.0f,// bottom left
            -0.1f,  0.1f, 0.0f,   0.0f, 1.0f,  0.0f // top left 
        };

        unsigned int indices[6]  = {
            0,1,3,
            1,2,3
        };

        public:
        RectangleGraphicsComponent();
        RectangleGraphicsComponent(const char* vertexPath, const char* fragmentPath);
        virtual ~RectangleGraphicsComponent();
        void update(Entity& entity);

        private:

        //initialize and bind vbo, vao, ebo
        void createContext();
    };
}

#endif