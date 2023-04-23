#include "feature_object.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

namespace jachan{
    void FeatureObject::Load(unsigned int row, unsigned int levelWidth, unsigned int levelHeight)
    {
        // clear old data
        this->Bricks.clear();
        // load from file
        glm::vec3 color = glm::vec3(1.0f); // original: white
        
        color = glm::vec3(0.2f, 0.6f, 1.0f);
        int height = 1;
        int width = row; 
        float unit_width = levelWidth / static_cast<float>(width), unit_height = levelHeight / height; 
        unit_width *= 0.2;
        
        int y = 0;
        for(int i = 0; i < row; i++)
        {
            glm::vec2 pos((unit_width * i) + (1 * i), unit_height * y);
            glm::vec2 size(unit_width, unit_width);
            
            this->Bricks.emplace_back(GameObject(pos, size, ResourceManager::GetTexture("block"), color));
        }
    }

    void FeatureObject::Draw(SpriteRenderer &renderer)
    {
        for (GameObject &tile : this->Bricks)
            if (!tile.Destroyed)
                tile.Draw(renderer);
    }

    bool FeatureObject::IsCompleted()
    {
        for (GameObject &tile : this->Bricks)
            if (!tile.IsSolid && !tile.Destroyed)
                return false;
        return true;
    }
}