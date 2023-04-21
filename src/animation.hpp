#ifndef _ANIMATION_H_
#define _ANIMATION_H_

#include <vector>
#include "entity.hpp"

namespace jachan{
    class Animation
    {
        private:
        std::vector<Entity> entites;
        int numOfEntites;

        public:
        void gameLoop();
    };
}

#endif