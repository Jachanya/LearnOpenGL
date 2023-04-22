#include "entity.hpp"

namespace jachan
{
    Entity::Entity(GraphicsComponent &graphicsComponent)
    :
    graphicsComponent{graphicsComponent}
    {}

    void Entity::update()
    {
        graphicsComponent.update(*this);
    }
}