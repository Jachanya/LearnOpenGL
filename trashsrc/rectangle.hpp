// #ifndef _RectangleGraphicsComponent_H_
// #define _RectangleGraphicsComponent_H_

// #include <glm/glm.hpp>
// #include <glm/gtc/matrix_transform.hpp>
// #include <glm/gtc/type_ptr.hpp>

// #include "shader.hpp"
// #include <glad/glad.h>
// #include <GLFW/glfw3.h>
// #include <vector>

// namespace NNGraphics{
//     class RectangleGraphicsComponent{
//         private:
//         Shader shader;
//         unsigned int EBO;
//         unsigned int VBO;
//         unsigned int VAO;
//         // float vertices[32] = {
//         //     0.05f,  0.0f, 0.0f, 0.0f, 0.0f, 0.0f, // right 
//         //     0.05f, 0.05f, 0.0f, 0.0f, 0.0f, 0.0f,  // top  
//         //     0.0f, 0.05f, 0.0f,  0.0f, 0.0f, 0.0f, 
//         //     0.0f,  0.0f, 0.0f,  0.0f, 0.0f, 0.0f,
//         // };

//         float vertices[32] = {
//             // positions          // texture coords
//             0.1f,  0.1f, 0.0f,   1.0f, 1.0f, 0.0f, // top right
//             0.1f, -0.1f, 0.0f,   1.0f, 0.0f, 0.0f,// bottom right
//             -0.1f, -0.1f, 0.0f,   0.0f, 0.0f, 0.0f,// bottom left
//             -0.1f,  0.1f, 0.0f,   0.0f, 1.0f,  0.0f // top left 
//         };

//         unsigned int indices[6]  = {
//             0,1,3,
//             1,2,3
//         };

//         public:
//         RectangleGraphicsComponent();
//         RectangleGraphicsComponent(const char* vertexPath, const char* fragmentPath);
//         ~RectangleGraphicsComponent();
//         //function to call when we want to display RectangleGraphicsComponent on the screen.
//         void display(const std::vector<float>& position,const std::vector<float>& color, int depth);

//         private:

//         //initialize and bind vbo, vao, ebo
//         void createContext();
//     };
// };

// #endif