#ifndef _FADE_TRANSITION_H_
#define _FADE_TRANSITION_H_

#include "transition.hpp"
#include "game_object.hpp"
#include "sprite_renderer.hpp"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


namespace jachan
{
    class FadeTransition : public Transition
    {
        private:
        Transition& transition;
        float current_iteration{90};

        public:
        FadeTransition(Transition& transition);
        virtual ~FadeTransition() = default;
        void setBeep(float current_iteration);
        GameObject& transform(SpriteRenderer &renderer);
    };
}
#endif