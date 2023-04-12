#ifndef _MATRIX_VIZ_H_
#define _MATRIX_VIZ_H_

#include <vector>
#include "vector_viz.hpp"

namespace NNGraphics {
    class MatrixViz {
    private:
    uint32_t n_rows;
    uint32_t n_cols;

    public:

    MatrixViz(uint32_t n_rows, uint32_t n_cols);
    void display();
    };
}

#endif