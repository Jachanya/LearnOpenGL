#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include "entity.hpp"

namespace jachan
{
    class Entity;

    class InputComponent
    {
        public:
        virtual ~InputComponent();
        virtual void update(Entity &entity) = 0;
    };

    class MovementComponent
    {
        public:
        virtual ~MovementComponent();
    };

    class GraphicsComponent
    {
        public:
        virtual ~GraphicsComponent();
        virtual void update(Entity &entity) = 0;
    };
}

#endif