#ifndef _OPERATIONS_H_
#define _OPERATIONS_H_

/* I realize I should start writing comments and descriptions
    The operation class perform linear algera "Operations" and visualize it
*/

namespace jachan
{

class Operation
{
public:
    virtual ~Operation();
    virtual void Draw(SpriteRenderer& renderer) = 0;
    // static void matmul(MatrixObject& mat1, MatrixObject& mat2);
    // static void dot(FeatureObj& vec1, FeatureObj& vec2);
    // static void scalarVecMul(FeatureObj& vec, float scale);
    // static void sum(FeatureObj& vec);
};

~Operation::Operation() {}

}

#endif