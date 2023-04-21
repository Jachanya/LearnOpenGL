#ifndef _COMPONENT_H_
#define _COMPONENT_H_

namespace jachan{

    class InputComponent
    {
        public:
        virtual ~InputComponent();
    };

    class MovementComponent
    {
        public:
        virtual ~MovementComponent();
    };

    class GraphicsComponent
    {
        public:
        virtual ~GraphicsComponent();
    };
}

#endif