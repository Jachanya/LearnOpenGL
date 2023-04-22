#include "src/animation.hpp"
#include "src/rectangle_graphics.hpp"
#include "src/entity.hpp"

int main()
{
    jachan::Animation animate;
    animate.initContext();

    jachan::GraphicsComponent * rgc = new jachan::RectangleGraphicsComponent();
    jachan::Entity * entity = new jachan::Entity(*rgc);


    animate.addEntity(entity);

    animate.gameLoop();
}