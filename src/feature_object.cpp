#include "feature_object.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

namespace jachan
{
    void FeatureObject::Load(unsigned int row, unsigned int levelWidth, unsigned int levelHeight)
    {
        // clear old data
        this->Bricks.clear();
        // load from file
        glm::vec4 color = glm::vec4(1.0f); // original: white
        
        color = glm::vec4(0.2f, 0.6f, 1.0f, 1.0f);
        int height = row;
        int width = row; 
        float unit_width = levelWidth / static_cast<float>(width), unit_height = levelHeight / height; 
        unit_width *= 0.3;
        unit_height *= 0.3;
        
        int y = 0;
        for(int i = 0; i < row; i++)
        {
            glm::vec2 pos((0.0), (unit_height * i) + (i));
            glm::vec2 size(unit_width, unit_height);
            
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