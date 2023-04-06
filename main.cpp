#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "src/shader.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define STB_IMAGE_IMPLEMENTATION
#include "src/stb_header.h"
#include "src/rectangle.hpp"

#include <iostream>
#include <vector>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;



int main()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    // --------------------
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    NNGraphics::Rectangle rect("src/shadersProgram/shader.vs", "src/shadersProgram/shader.fs");
    
    // -----------
    while (!glfwWindowShouldClose(window))
    {
        // input
        // -----
        processInput(window);

        // render
        // ------

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        std::vector<float> position = {0.1f, 0.1f, 0.0f};
        std::vector<float> color = {0.4f, 0.4f, 0.0f};
        rect.display(position, color);

        std::vector<float> position2 = {0.1f + 0.05f, 0.1f, 0.0f};
        std::vector<float> color2 = {0.6f, 0.6f, 0.0f};
        rect.display(position2, color2);

        std::vector<float> position3 = {0.1f + 0.10, 0.1f, 0.0f};
        std::vector<float> color3 = {0.4f, 0.4f, 0.0f};
        rect.display(position3, color3);

        std::vector<float> position4 = {0.1f + 0.15f, 0.1f, 0.0f};
        std::vector<float> color4 = {0.6f, 0.6f, 0.0f};
        rect.display(position4, color4);

        std::vector<float> position5 = {0.1f + 0.20, 0.1f, 0.0f};
        std::vector<float> color5 = {0.4f, 0.4f, 0.0f};
        rect.display(position5, color5);

        std::vector<float> position6 = {0.1f + 0.25f, 0.1f, 0.0f};
        std::vector<float> color6 = {0.6f, 0.6f, 0.0f};
        rect.display(position6, color6);

        std::vector<float> position7 = {0.1f + 0.30, 0.1f, 0.0f};
        std::vector<float> color7 = {0.4f, 0.4f, 0.0f};
        rect.display(position7, color7);

        std::vector<float> position8 = {0.1f + 0.35f, 0.1f, 0.0f};
        std::vector<float> color8 = {0.6f, 0.6f, 0.0f};
        rect.display(position8, color8);


        glfwSwapBuffers(window);
        glfwPollEvents();

    }

    // optional: de-allocate all resources once they've outlived their purpose:
    // ------------------------------------------------------------------------
    
    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    glfwTerminate();
    return 0;
}


// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    
    int width = 0;
    int height = 0;

    if(glfwGetKey(window, GLFW_KEY_BACKSPACE) == GLFW_PRESS){
        glfwGetWindowSize(window, &width, &height);

        std::cout << "Height: " << height << std::endl;
        std::cout << "Width: " << width << std::endl;
    }
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}