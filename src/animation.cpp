#include "animation.hpp"
#include <iostream>


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
        delete Renderer;
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
        ResourceManager::LoadTexture("src\\textures\\block.png", true, "block");

        FeatureObject feature01;
        feature01.Load(5, this->Width, this->Height /2);
        this->Features.emplace_back(feature01); 

        
        MatrixObject mat01;
        
        mat01.Load(5, 10, this->Width, this->Height /2);
        
        this->Embeddings.emplace_back(mat01); 

        
             
    }

    void Animation::Update(float dt)
    {
        
    }

    void Animation::ProcessInput(float dt)
    {
    
    }

    void Animation::Render()
    {   
        IdentityTransition iTransition{this->Features[0].Bricks[2]};
        FadeTransition fTransition{iTransition};
        fTransition.setBeep(this->beep);
        fTransition.transform(*Renderer);
        // std::cout << this->beep << std::endl;
        
        this->Features[0].Draw(*Renderer);

        this->Embeddings[0].Draw(*Renderer);
        // Renderer->DrawSprite(ResourceManager::GetTexture("face"), 
        // glm::vec2(100.0f, 100.0f), glm::vec2(100.0f, 100.0f), 00.0f, glm::vec4(0.3f, 1.0f, 0.0f, 1.0f));
        
        if(this->beep > 180) this->beep = 0;
        this->beep = this->beep + 0.2;
        
    }
}