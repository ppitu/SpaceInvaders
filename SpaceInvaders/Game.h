#ifndef GAME_H
#define GAME_H

#include <SDL.h>

class Game
{
public:
	Game();

	void init(const char* title, int xpos, int ypos, int x, int y, int flags);
	
	void handleEvents();
	void update();
	void render();

	void clean();

	bool running() { return isRunning; }

private:
	SDL_Window* window;
	SDL_Renderer* ren;

	SDL_Rect rect;

	bool isRunning;
};

#endif

