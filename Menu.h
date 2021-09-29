#pragma once
#include "SDL.h"
#include "TextureManager.h"

class Menu {
public:
	bool Running();
	void SetMenuRun(bool state);
	SDL_Texture* GetTexture();
	Menu(SDL_Renderer* render);

private:
	SDL_Texture* menu_texture;
	bool menu_run;
};