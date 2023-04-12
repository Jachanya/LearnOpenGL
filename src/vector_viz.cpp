#include "vector_viz.hpp"

namespace NNGraphics{
    VectorViz::VectorViz(uint32_t length)
    : length{length}
    {

    };

    void VectorViz::display(std::vector<float>& position, std::vector<float>& color){
        assert(position.size() == color.size());
        this->position = position;
        this->color = color;

        std::vector<float> new_position;
        for(int i = 0; i < this->length; i++){
            new_position = position;
            switch(this->orient){
                case orientation::vertical:
                    new_position[1] += i * 0.3;
                    break;
                case orientation::horizontal:
                    new_position[0] += i * 0.3;
                    break;
                
                default:
                    std::cout << "Invalid orientation enum, get help" << std::endl;
            }
            rect.display(new_position, color);
        }

        // make a rect children class to have different display functinality
        // so as to represent different animation. 
        // flip
    };

    void VectorViz::transpose(){
        switch(this->orient){
            case orientation::vertical:
                orient = orientation::horizontal;
                this->display(this->position, this->color);
                break;
            case orientation::horizontal:
                orient = orientation::vertical;
                this->display(this->position, this->color);
                break;
            
            default:
                std::cout << "Invalid orientation enum, get help" << std::endl;
        }
    }
}