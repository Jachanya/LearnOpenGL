#ifndef _MATRIX_VIZ_H_
#define _MATRIX_VIZ_H_

#include <vector>
#include <algorithm>
#include "vector_viz.hpp"
#include "linAlg.hpp"

namespace NNGraphics {
    class MatrixViz : public LinAlg{
    private:
    uint32_t n_rows;
    uint32_t n_cols;
    VectorViz arrayObj;
    std::vector<float> position{0.0,0.0,0.0};
    std::vector<float> color{0.0,0.0,0.0};

    public:

    MatrixViz(uint32_t n_rows, uint32_t n_cols);
    void display(std::vector<float> position, std::vector<float> color);
    void transpose();
    };
}

#endif