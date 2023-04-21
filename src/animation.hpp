#ifndef _ANIMATION_H_
#define _ANIMATION_H_

#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <vector>
#include "entity.hpp"

namespace jachan{
    class Animation
    {
        private:
        int SCR_HEIGHT{800}, SCR_WIDTH{800};
        std::vector<Entity> entites;
        GLFWwindow *window;
        int numOfEntites;

        public:
        Animation();
        void initContext();
        void gameLoop();

        private:
        int initWindow();
        int initGLAD() const;
        void initGLFW() const;
    };
}

#endif