#ifndef _MAT_VEC_MUL_H_
#define _MAT_VEC_MUL_H_

#include "operations.hpp"
#include "matrix_object.hpp"
#include "feature_object.hpp"
#include "sprite_renderer.hpp"

namespace jachan
{
    class MatVecMul : public Operation
    {
    private:
    MatrixObj& mat;
    FeatureObj& vec;
    bool isCompleted = false;

    public:
        MatVecMul(MatrixObj& mat, FeatureObj& vec);
        virtual void Draw(SpriteRenderer &renderer);
    };
}

#endif