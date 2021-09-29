#pragma once
#include "SDL.h"
#include "SDL_image.h"

class TextureManager {
public:
	static SDL_Texture* CreateTextureM(SDL_Renderer* render);
	static SDL_Texture* CreateTextureB(SDL_Renderer* render);
	static SDL_Texture* CreateTextureW(SDL_Renderer* render);
	static SDL_Texture* CreateTextureC(SDL_Renderer* render);
	static SDL_Texture* CreateTextureO(SDL_Renderer* render);
};
