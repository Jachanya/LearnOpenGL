#ifndef _TRANSITION_H_
#define _TRANSITION_H_

#include "sprite_renderer.hpp"
#include "game_object.hpp"

namespace jachan
{
    class Transition
    {
    public:
    virtual ~Transition(){};
    virtual GameObject& transform(SpriteRenderer &renderer) = 0;
    };


}

#endif