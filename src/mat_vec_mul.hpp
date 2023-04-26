#ifndef _MAT_VEC_MUL_H_
#define _MAT_VEC_MUL_H_

#include "operations.hpp"
#include "matrix_object.hpp"
#include "feature_object.hpp"
#include "sprite_renderer.hpp"
#include "game_object.hpp"
#include <glad/glad.h>
#include <glm/glm.hpp>

namespace jachan
{
    class MatVecMul : public Operation
    {
    private:
    MatrixObject& mat;
    FeatureObject& vec;
    bool isCompleted = false;

    public:
        MatVecMul(MatrixObject& mat, FeatureObject& vec);
        virtual void Draw(SpriteRenderer &renderer);
    };
}

#endif