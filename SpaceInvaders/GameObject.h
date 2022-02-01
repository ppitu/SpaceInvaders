#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <SDL2/SDL.h>

class GameObject
{
public:

	GameObject ( SDL_Renderer* _ren, int x, int y );
	~GameObject();

	void Update();
	void Render();

private:
	int xpos;
	int ypos;

	SDL_Rect rect;
	SDL_Renderer* ren;

    bool right;
};

#endif
