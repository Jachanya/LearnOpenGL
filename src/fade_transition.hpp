#ifndef _FADE_TRANSITION_H_
#define _FADE_TRANSITION_H_

#include "transition.hpp"

namespace jachan
{
    class FadeTransition : Transition
    {
        private:
        Transition& transition;
        public:
        FadeTransition(Transition& transition);
        virtual ~FadeTransition() = default;
        void transform();
    };
}
#endif