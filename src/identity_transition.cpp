#include "identity_transition.hpp"

namespace jachan
{
    IdentityTransition::IdentityTransition(GameObject& gameObject)
    : gameObject{gameObject}
    {}

    GameObject& IdentityTransition::transform(SpriteRenderer &renderer)
    {
        return gameObject;
    }
}