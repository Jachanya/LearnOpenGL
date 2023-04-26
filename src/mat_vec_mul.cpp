#include "mat_vec_mul.cpp"

namespace jachan
{
    MatVecMul::MatVecMul(MatrixObj& mat, FeatureObj& vec)
    : mat{mat}, vec{vec}
    {}

    void MatVecMul::Draw(SpriteRenderer &renderer)
    {
        mat.Draw(renderer);
        vec.Draw(renderer);
    }
}