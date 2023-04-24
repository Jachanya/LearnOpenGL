#include "fade_transition.hpp"
#include <iostream>

namespace jachan
{
    FadeTransition::FadeTransition(Transition& transition)
    : transition{transition}
    {}

    void FadeTransition::setBeep(float current_iteration)
    {
        this->current_iteration = current_iteration;
    }

    GameObject& FadeTransition::transform(SpriteRenderer &renderer)
    {
        GameObject& gameObj = transition.transform(renderer);
        
        gameObj.Color = glm::vec4(gameObj.Color.x, gameObj.Color.y ,  gameObj.Color.z, glm::cos(glm::radians(static_cast<float>(current_iteration))));
        gameObj.Draw(renderer);
        
        return gameObj;
    }
}