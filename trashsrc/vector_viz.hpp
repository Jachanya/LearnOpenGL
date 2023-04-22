// #ifndef _VECTOR_VIZ_H_
// #define _VECTOR_VIZ_H_

// #include <vector>
// #include "rectangle.hpp"
// #include "linAlg.hpp"

// namespace NNGraphics{
//     enum orientation{
//         horizontal,
//         vertical
//     };

//     class VectorViz : public LinAlg{
//     private:
//     orientation orient = NNGraphics::orientation::horizontal;
//     uint32_t length;
//     std::vector<float> position;
//     std::vector<float> color;

//     NNGraphics::Rectangle rect{"src/shadersProgram/shader.vs", "src/shadersProgram/shader.fs"};
//     public:

//     VectorViz(uint32_t length);
//     void display(std::vector<float>& positions, std::vector<float>& colors);
//     void setOrientation(orientation orient){orient = orient;}
//     void setLength(uint32_t length){this->length = length;}
//     orientation getOrientation(){return orient;}
//     void transpose();
//     };
    
// }
// #endif