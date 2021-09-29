#pragma once
#include "SDL.h"
#include "TextureManager.h"

class Wall {
public:
	Wall(SDL_Renderer* render);
	void SetX(int x);
	void SetY(int y);
	SDL_Rect GetRect();

private:
	SDL_Rect wall_rect;
	SDL_Texture* wall_texture;
};