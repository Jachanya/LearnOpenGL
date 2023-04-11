#include "vector_viz.hpp"

namespace NNGraphics{
    VectorViz::VectorViz(orientation orient, uint32_t length)
    : orient{orient}, length{length}
    {

    };

    void VectorViz::display(std::vector<float>& positions, std::vector<float>& colors){
        assert(positions.size() == colors.size());
        std::vector<float> new_position;

        for(int i = 0; i < this->length; i++){
            new_position = positions;
            switch(this->orient){
                case orientation::vertical:
                    new_position[0] += i * 1.1;
                    break;
                case orientation::horizontal:
                    new_position[1] += i * 1.1;
                    break;
                
                default:
                    std::cout << "Invalid orientation enum, get help";
            }
            rect.display(new_position, colors);
        }

        // make a rect children class to have different display functinality
        // so as to represent different animation. 
        // flip
    };
}