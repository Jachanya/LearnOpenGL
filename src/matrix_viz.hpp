#ifndef _MATRIX_VIZ_H_
#define _MATRIX_VIZ_H_

#include <vector>
#include "vector_viz.hpp"

namespace NNGraphics {
    class MatrixViz {
    private:
    uint32_t n_rows;
    uint32_t n_cols;
    VectorViz arrayObj;
    std::vector<float> position{0.0,0.0,0.0};

    public:

    MatrixViz(uint32_t n_rows, uint32_t n_cols);
    void display(std::vector<float> position, std::vector<float> color);
    };
}

#endif