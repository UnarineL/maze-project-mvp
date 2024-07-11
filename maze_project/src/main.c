#include <SDL2/SDL.h>
#include "../include/main.h"


int main(int args, char *argv[])
{
	int running;
	SDLResources resources = {NULL, NULL};
	SDL_Event event;
	running = 1;

	if (initSDL(&resources) != 0)
	{
		return (1);
	}

	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				running = 0;
			}
		}

		SDL_SetRenderDrawColor(resources.renderer, 0, 0, 0, 255);
		SDL_RenderClear(resources.renderer);

		drawMaze(resources.renderer);
		SDL_RenderPresent(resources.renderer);
	}

	cleanUp(&resources);
	return (0);
}
