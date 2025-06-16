#include <SDL.h>
#include <SDL_ttf.h>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {

    string status = "start";

    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_Window* window;
    SDL_Renderer* renderer;

    int result = SDL_CreateWindowAndRenderer( 640, 480, NULL, &window, &renderer );
    
    if ( result != 0 ) {
        cout << "Failed to create window and renderer: " << SDL_GetError() << endl;
    }

    // TTF_Font* font = TTF_OpenFont("/System/Library/Fonts/Supplemental/Arial.ttf", 24); // Or any other TTF path
    // if (!font) {
    //     std::cerr << "Failed to load font: " << TTF_GetError() << std::endl;
    //     return 1;
    // }

    // SDL_Color color = {255, 255, 255, 255};  // White text
    // SDL_Surface* surface = TTF_RenderText_Solid(font, "Hello, SDL2!", color);
    // SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);

    // SDL_Rect dstRect = {100, 100, surface->w, surface->h};
    // SDL_FreeSurface(surface);

    SDL_SetRenderDrawColor( renderer, 255, 255, 255, 255 );
    SDL_RenderDrawPoint( renderer, 100, 100 );

    // Update window
    SDL_RenderPresent( renderer );

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                cout << "Quitting..." << endl;
                running = false;
            }
            if (event.type == SDL_KEYDOWN) {
                cout << "Key pressed: " << event.key.keysym.sym << endl;
                if (event.key.keysym.sym == SDLK_w) {
                    cout << "W pressed" << endl;
                    status = "w was pressed";
                    cout << "Status: " << status << endl;
                    SDL_SetRenderDrawColor( renderer, 255, 255, 0, 255 );
                    SDL_RenderDrawPoint( renderer, 100, 100 );

                    // Update window
                    SDL_RenderPresent( renderer );

                }
            }
        }

        // SDL_RenderClear(renderer);
        // SDL_RenderCopy(renderer, texture, nullptr, &dstRect);
        // SDL_RenderPresent(renderer);
    }

    // SDL_DestroyTexture(texture);
    // TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}
