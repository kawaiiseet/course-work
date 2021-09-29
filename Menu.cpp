#include "Menu.h"

bool Menu::Running() {
	return menu_run;
}

void Menu::SetMenuRun(bool state) {
	this->menu_run = state;
}

SDL_Texture* Menu::GetTexture() {
	return this->menu_texture;
}

Menu::Menu(SDL_Renderer* render) {
	Menu::menu_texture = TextureManager::CreateTextureM(render);
	menu_run = true;
}