#ifndef _TRANSITION_H_
#define _TRANSITION_H_

namespace jachan
{
    class Transition
    {
    public:
    virtual ~Transition() = 0;
    virtual void transform() = 0;
    };

    ~Transition::Transition(){}
    void Transition::transform(){}
}

#endif