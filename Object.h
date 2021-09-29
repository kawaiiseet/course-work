#pragma once
#include "SDL.h"
#include "TextureManager.h"
#include <vector>
#include <iostream>
#include <ctime>

class Object {
public:
	Object(SDL_Renderer* render);
	void Hit(std::vector <Object>& bounty, int i);
	SDL_Rect GetRect();
	int GetRectX();
	int GetRectY();
	void SetRectX(int x);
	void SetRectY(int y);

private:
	SDL_Texture* object_texture;
	SDL_Texture* background_texture;
	SDL_Rect object_rect;
};
