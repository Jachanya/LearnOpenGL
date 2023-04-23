#ifndef GAMELEVEL_H
#define GAMELEVEL_H
#include <vector>

#include <glad/glad.h>
#include <glm/glm.hpp>

#include "game_object.hpp"
#include "sprite_renderer.hpp"
#include "resource_manager.hpp"

namespace jachan{

    class FeatureObject
    {
    public:
        // level state
        std::vector<GameObject> Bricks;
        // constructor
        FeatureObject() { }
        // loads level from file
        void Load(unsigned int row, unsigned int levelWidth, unsigned int levelHeight);
        // render level
        void Draw(SpriteRenderer &renderer);
        // check if the level is completed (all non-solid tiles are destroyed)
        bool IsCompleted();
    }; 
}

#endif