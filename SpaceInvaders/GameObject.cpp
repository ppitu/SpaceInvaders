#include "GameObject.h"

GameObject::GameObject(SDL_Renderer* _ren, int x, int y) :
	ren(_ren),
	xpos(x),
	ypos(y)
{
}

GameObject::~GameObject()
{
}

void GameObject::Update()
{
	xpos++;
	ypos++;

	rect.x = xpos;
	rect.y = ypos;
	rect.h = 40;
	rect.w = 40;
}

void GameObject::Render()
{
	SDL_SetRenderDrawColor(ren, 0, 0, 255, 255);

	SDL_RenderFillRect(ren, &rect);
}
