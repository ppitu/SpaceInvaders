#ifndef SPRITE_H
#define SPRITE_H

#include <SDL2/SDL.h>

class Sprite
{
public:
	Sprite();

	static SDL_Surface* Load(char* file);
	static bool Draw(SDL_Surface* dest, SDL_Surface* src, int x, int y);
	static bool Draw(SDL_Surface* dest, SDL_Surface* src, int x, int y, int x2, int y2, int w, int h);

};

#endif