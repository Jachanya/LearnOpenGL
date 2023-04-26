#include "mat_vec_mul.hpp"
#include <iostream>

namespace jachan
{
    MatVecMul::MatVecMul(MatrixObject& mat, FeatureObject& vec)
    : mat{mat}, vec{vec}
    {}

    void MatVecMul::Draw(SpriteRenderer &renderer)
    {
        
        // std::cout << "Here" << std::endl;
        glm::vec2 pos = (mat.Bricks[mat.Bricks.size()-1][0]).Position;

        
        for(int i = 0; i < vec.Bricks.size(); i++)
        {
            vec.Bricks[i].Position = glm::vec2{pos.x + 100, vec.Bricks[i].Position.y};
        }

        mat.Draw(renderer);
        vec.Draw(renderer);
    }
}