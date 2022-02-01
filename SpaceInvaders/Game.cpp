#include "Game.h"

#include "GameObject.h"

GameObject* player;

Game::Game() :
	isRunning(false),
	window(NULL),
	ren(NULL)
{
}

void Game::init(const char* title, int xpos, int ypos, int x, int y, int flags)
{
	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow(title, xpos, ypos, x, y, flags);
	ren = SDL_CreateRenderer(window, -1, 0);

	//rect.x = 10;
	//rect.y = 10;
	//rect.h = 50;
	//rect.w = 50;

	player = new GameObject(ren, 0, 0);

	isRunning = true;
}

void Game::handleEvents()
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_ESCAPE:
			isRunning = false;
		}
	default:
		break;
	}
}

void Game::update()
{
	player->Update();
}

void Game::render()
{
	SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);

	SDL_RenderClear(ren);

	player->Render();

	SDL_RenderPresent(ren);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(ren);

	SDL_Quit();
}
