#ifndef _ENTITY_H_
#define _ENTITY_H_

#include "component.hpp"

namespace jachan
{
    class InputComponent;
    class MovementComponent;
    class GraphicsComponent;

    class Entity
    {
        private:
        int position_x, position_y;
        GraphicsComponent &graphicsComponent;

        public:
        Entity(GraphicsComponent &graphicsComponent);
        void update();
    };
}

#endif