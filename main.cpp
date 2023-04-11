#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "src/shader.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define STB_IMAGE_IMPLEMENTATION
#include "src/stb_header.h"
#include "src/vector_viz.hpp"

#include <iostream>
#include <vector>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window, NNGraphics::VectorViz& arrayObj);

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

    NNGraphics::orientation orient1 = NNGraphics::orientation::vertical;
    NNGraphics::orientation orient2 = NNGraphics::orientation::horizontal;

    NNGraphics::VectorViz arrayObj(orient1, 6);
    std::vector<float> positions = {0.1f, 0.1f, 0.0f};
    std::vector<float> colors = {0.4f, 0.4f, 0.0f};

    NNGraphics::VectorViz arrayObj2(orient2, 6);
    std::vector<float> positions2 = {0.3f + 0.1f,0.1, 0.0f};
    std::vector<float> positions3 = {0.6f  + 0.1f, 0.1, 0.0f};
    std::vector<float> positions4 = {0.9f  + 0.1f, 0.1, 0.0f};
    std::vector<float> positions5 = {1.2f  + 0.1f, 0.1, 0.0f};
    std::vector<float> positions6 = {1.5f  + 0.1f, 0.1, 0.0f};
    std::vector<float> positions7 = {1.8f  + 0.1f, 0.1, 0.0f};
    

    bool someNonSense = true;
    // -----------
    while (!glfwWindowShouldClose(window))
    {
        // input
        // -----
        processInput(window, arrayObj2);

        // render
        // ------

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // arrayObj.display(positions,colors);
        arrayObj2.display(positions2, colors);
        arrayObj2.display(positions3, colors);
        arrayObj2.display(positions4, colors);
        arrayObj2.display(positions5, colors);
        arrayObj2.display(positions6, colors);
        arrayObj2.display(positions7, colors);

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
void processInput(GLFWwindow *window, NNGraphics::VectorViz& arrayObj)
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

    if (glfwGetKey(window, GLFW_KEY_T) == GLFW_PRESS){
        arrayObj.transpose();
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