#include "./Application.h"
void Application::Initialize(int x, int y, int w, int h, Uint32 flags){
    SDL_Init(SDL_INIT_EVERYTHING);

        mWindow = SDL_CreateWindow(
            "Webasm",
            x,
            y, 
            w, 
            h, 
            flags
        );


        mRenderer = SDL_CreateRenderer(mWindow, -1, SDL_RENDERER_ACCELERATED);
        SDL_SetRenderDrawColor(mRenderer, 0xff, 0xff, 0xff, 0xff);

        if(mWindow == NULL) {
            printf("Could not create window: %s\n", SDL_GetError());
        };

        mReady = true;

        GameLoop();

        };

void Application::CleanUp() {

}

void Application::GameLoop(){
    while(mReady){
        Input();
        Update();
        Render();
    };
    Application::CleanUp();
};

void Application::Input(){
    
};

void Application::Update(){
    SDL_Rect rect(0, 0, 100, 100);
    SDL_FillRect(mWindow, &rect, SDL_MapRGB())
};

void Application::Render(){
    
};