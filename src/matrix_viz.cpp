#include "matrix_viz.hpp"

namespace NNGraphics {
    MatrixViz::MatrixViz(uint32_t n_rows, uint32_t n_cols)
    : n_rows{n_rows}, n_cols{n_cols}, arrayObj{n_cols}
    {
    }

    void MatrixViz::display(std::vector<float> position, std::vector<float> color){
        for(int i = 0; i < n_rows; i++){
            std::vector<float> row_position = position;
            switch(arrayObj.getOrientation()){
                case orientation::vertical:
                    row_position[0] += i * 0.3;
                    break;
                case orientation::horizontal:
                    row_position[1] += i * 0.3;
                    break;
                
                default:
                    std::cout << "Invalid orientation enum, get help" << std::endl;
            }
            row_position[1] = i * 0.3;
            arrayObj.display(row_position, color);
        }
    }

    void MatrixViz::transpose(){
        
    }
}