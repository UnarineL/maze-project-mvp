#ifndef MAIN_H
#define MAIN_H

#include <SDL2/SDL.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
// structure to hold SDL windw and renderer
typedef struct
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDLResources;

// Function protypes
int initSDL(SDLResources *resources);
void cleanUp(SDLResources *resources);
void drawMaze(SDL_Renderer *renderer);

#endif
