#ifndef _ANIMATION_H_
#define _ANIMATION_H_

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "sprite_renderer.hpp"
#include "resource_manager.hpp"
#include "feature_object.hpp"
#include "fade_transition.hpp"
#include "identity_transition.hpp"

namespace jachan{

    enum AnimationState
    {
        ANIMATION_ACTIVE,
        ANIMATION_MENU,
        ANIMATION_DONE
    };

    class Animation
    {
    public:

        AnimationState State;
        bool Keys[1024];
        unsigned int Width, Height;
        float beep{90};
        std::vector<FeatureObject>  Features;
        Animation(unsigned int width, unsigned int height);
        ~Animation();

        void Init();
        void ProcessInput(float dt);
        void Update(float dt);
        void Render();
    };

}
#endif