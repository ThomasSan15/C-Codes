#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>

int main() {
    SDL_Window *window = SDL_CreateWindow("Image viewer",  SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 600, 0);
    printf("Hello, World!\n");
    SDL_Delay(3000); // Keep the window open for 3 seconds
    SDL_Surface *psurface = SDL_GetWindowSurface(window);
    SDL_FillRect(psurface, NULL, 0xFF0000 ); // Fill the surface with a color
    SDL_UpdateWindowSurface(window); // Update the window to show the filled surface
    SDL_Delay(3000); // Keep the window open for another 3 seconds to
    return 0;
}   