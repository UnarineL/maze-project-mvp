#include <SDL2/SDL.h>
#include "../include/main.h"

int initSDL(SDLResources *resources)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		fprintf(stderr, "could not initialize SDL: %s\n", SDL_GetError());
		return (1);
	}

	resources->window = SDL_CreateWindow("Maze Project",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			SCREEN_WIDTH, SCREEN_HEIGHT,
			SDL_WINDOW_SHOWN);
	if (!resources->window)
	{
		fprintf(stderr, "could not create window: %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}

	resources->renderer = SDL_CreateRenderer(resources->window, -1, SDL_RENDERER_ACCELERATED);
	if (!resources->renderer)
	{
		fprintf(stderr, "could not create renderer: %s\n", SDL_GetError());
		SDL_DestroyWindow(resources->window);
		SDL_Quit();
		return (1);
	}
	return (0);
}

void cleanUp(SDLResources *resources)
{
	if (resources->renderer)
	{
		SDL_DestroyRenderer(resources->renderer);
	}
	if (resources->window)
	{
		SDL_DestroyWindow(resources->window);
	}
	SDL_Quit();
}
