#pragma once 
#include <SDL.h>
#include <stdio.h>

class Application
{ 
public:

    Application(){};
    ~Application(){};

    void Initialize(int x, int y, int w, int h, Uint32 flags);
    void CleanUp();

private:
    SDL_Window * mWindow = nullptr;
    SDL_Renderer * mRenderer = nullptr;

    void GameLoop();
    void Input();
    void Update();
    void Render();

    bool mReady = false;
};