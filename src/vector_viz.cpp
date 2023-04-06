#include "vector_viz.hpp"

namespace NNGraphics{
    VectorViz::VectorViz(){

    };

    void VectorViz::display(std::vector<std::vector<float>>& positions, std::vector<std::vector<float>>& colors){
        assert(positions.size() == colors.size());
        for(int i = 0; i < positions.size(); i++){
            rect.display(positions[i], colors[i]);
        }
    };
}