#ifndef _VECTOR_VIZ_H_
#define _VECTOR_VIZ_H_

#include <vector>
#include "rectangle.hpp"

namespace NNGraphics{
    class VectorViz{
    private:
    std::vector<float> block;
    NNGraphics::Rectangle rect{"src/shadersProgram/shader.vs", "src/shadersProgram/shader.fs"};
    public:

    VectorViz();
    void display(std::vector<std::vector<float>>& positions, std::vector<std::vector<float>>& colors);
    };
}
#endif