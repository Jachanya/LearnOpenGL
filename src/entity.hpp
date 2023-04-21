#ifndef _ENTITY_H_
#define _Entity_H_

namespace jachan{
    class Entity
    {
        private:
        int position_x, position_y;
        public:
        Entity();
        void update();
    };
}

#endif