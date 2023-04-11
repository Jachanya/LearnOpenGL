#ifndef _VECTOR_VIZ_H_
#define _VECTOR_VIZ_H_

#include <vector>
#include "rectangle.hpp"

namespace NNGraphics{
    enum orientation{
        horizontal,
        vertical
    };

    class VectorViz{
    private:
    orientation orient;
    uint32_t length;
    std::vector<float> block;
    NNGraphics::Rectangle rect{"src/shadersProgram/shader.vs", "src/shadersProgram/shader.fs"};
    public:

    VectorViz(orientation orient, uint32_t length);
    void display(std::vector<float>& positions, std::vector<float>& colors);
    void setOrientation(orientation orient){orient = orient;}
    };
    
}
#endif