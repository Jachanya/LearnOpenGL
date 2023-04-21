#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "component.hpp"

namespace jachan
{
    class Entity
    {
        private:
        int position_x, position_y;
        InputComponent *inputComponent;
        MovementComponent *movementComponent;
        GraphicsComponent *graphicsComponent;

        public:
        Entity();
        Entity(InputComponent *inputComponent, MovementComponent *movementComponent, GraphicsComponent *graphicsComponent);
        void update();
    };
}

#endif