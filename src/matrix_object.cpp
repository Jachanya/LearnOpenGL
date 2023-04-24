#include "matrix_object.hpp"
#include <iostream>

namespace jachan
{
    void MatrixObject::Load(unsigned int row, unsigned int col, unsigned int lvlWidth, unsigned int lvlHeight)
    {
        // this->Bricks.clear();

        // calculate dimensions
        float unit_width    = (lvlWidth / static_cast<float>(row)) * 0.2;
        float unit_height   = (lvlHeight / col) * 0.3;
        
        glm::vec4 color = glm::vec4(1.0f);

        for(unsigned int x = 0; x < row; x++)
        {
            std::vector<GameObject> temp;
            for(int y = 0; y< col; y++)
            {
                glm::vec2 pos( (unit_width * x) + (x), (unit_height * y) + (y));
                glm::vec2 size(unit_width, unit_height);

                color = glm::vec4(0.2f, 0.6f * x, 1.0f, 1.0f);
                
                temp.emplace_back(
                    GameObject(pos, size, ResourceManager::GetTexture("block"), color)
                );
            }
            this->Bricks.emplace_back(temp);
            
        }
    }

    void MatrixObject::Draw(SpriteRenderer& renderer)
    {
        for(int i = 0; i < Bricks.size(); i++)
        {
            for(int y = 0; y< Bricks[0].size(); y++)
            {
                Bricks[i][y].Draw(renderer);
            }
        }
    }
}