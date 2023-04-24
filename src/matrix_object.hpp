#ifndef _MATRIX_OBJECT_H_
#define _MATRIX_OBJECT_H_

#include <glad/glad.h>
#include <glm/glm.hpp>
#include <vector>

#include "game_object.hpp"
#include "sprite_renderer.hpp"
#include "resource_manager.hpp"

namespace jachan
{
    class MatrixObject
    {
    public:
        std::vector<std::vector<GameObject>> Bricks;

        MatrixObject() = default;
        void Load(unsigned int row, unsigned int col, unsigned int lvlWidth, unsigned int lvlHeight);
        void Draw(SpriteRenderer& renderer);
    };
}
#endif