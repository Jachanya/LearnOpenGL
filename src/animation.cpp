#include "animation.hpp"

namespace jachan
{
    // Game-related State data
    SpriteRenderer  *Renderer;
    
    Animation::Animation(unsigned int width, unsigned int height) 
        : State(ANIMATION_ACTIVE), Keys(), Width(width), Height(height)
    { 

    }

    Animation::~Animation()
    {
        
    }

    void Animation::Init()
    {
        // load shaders
        ResourceManager::LoadShader("src\\shaders\\sprite.vs", "src\\shaders\\sprite.frag", nullptr, "sprite");
        // configure shaders
        glm::mat4 projection = glm::ortho(0.0f, static_cast<float>(this->Width), 
            static_cast<float>(this->Height), 0.0f, -1.0f, 1.0f);
        ResourceManager::GetShader("sprite").Use().SetInteger("image", 0);
        ResourceManager::GetShader("sprite").SetMatrix4("projection", projection);
        // set render-specific controls
        Renderer = new SpriteRenderer(ResourceManager::GetShader("sprite"));
        // load textures
        ResourceManager::LoadTexture("src\\textures\\orange.png", true, "face");
    }

    void Animation::Update(float dt)
    {
        
    }

    void Animation::ProcessInput(float dt)
    {
    
    }

    void Animation::Render()
    {
        Renderer->DrawSprite(ResourceManager::GetTexture("face"), 
        glm::vec2(100.0f, 100.0f), glm::vec2(10.0f, 10.0f), 00.0f, glm::vec3(0.0f, 1.0f, 0.0f));
    }
}