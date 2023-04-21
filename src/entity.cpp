#include "entity.hpp"

namespace jachan
{
    Entity::Entity()
    {}

    Entity::Entity(InputComponent *inputComponent, MovementComponent *movementComponent, GraphicsComponent *graphicsComponent)
    : inputComponent{inputComponent},
    movementComponent{movementComponent},
    graphicsComponent{graphicsComponent}
    {}
}