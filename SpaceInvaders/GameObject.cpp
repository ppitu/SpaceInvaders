#include "GameObject.h"

GameObject::GameObject(SDL_Renderer* _ren, int x, int y) :
	xpos(x),
	ypos(y),
    ren(_ren),
    right(true)
{
}

GameObject::~GameObject()
{
}

void GameObject::Update()
{

    if(right)
    {
        xpos += 5;
    }
    else
    {
        ypos -= 5;
    }

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
