#include "Sprite.h"

Sprite::Sprite()
{
}

SDL_Surface* Sprite::Load(char* file)
{
	SDL_Surface* temp = NULL;

	if ((temp = SDL_LoadBMP(file)) == NULL)
	{
		return NULL;
	}

	return temp;
}
