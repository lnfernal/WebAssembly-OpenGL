#include "../utils/Application.h"
#include <SDL.h>

int main(int argc, char* argv[]) {
    Application app;
    app.Initialize(SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                            100, 100, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    return 0;
}