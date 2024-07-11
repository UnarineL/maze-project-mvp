#include <SDL2/SDL.h>
#include "../include/main.h"

void drawMaze(SDL_Renderer *renderer)
{
	int x;
	int y;
	int gridSize;
	
	gridSize = 50;
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

	for (x = 0; x < SCREEN_WIDTH; x += gridSize)
	{
		SDL_RenderDrawLine(renderer, x, 0, x, SCREEN_HEIGHT);
	}
	for (y = 0; y < SCREEN_HEIGHT; y += gridSize)
	{
		SDL_RenderDrawLine(renderer, 0, y, SCREEN_WIDTH, y);
	}

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_Rect wall = {gridSize, gridSize, gridSize, gridSize};
	SDL_RenderFillRect(renderer, &wall);
}
