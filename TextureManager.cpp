#include "TextureManager.h"

SDL_Texture* TextureManager::CreateTextureM(SDL_Renderer* render) {
	return IMG_LoadTexture(render, "menu.png");
}

SDL_Texture* TextureManager::CreateTextureB(SDL_Renderer* render) {
	return IMG_LoadTexture(render, "background.png");
}

SDL_Texture* TextureManager::CreateTextureW(SDL_Renderer* render) {
	return IMG_LoadTexture(render, "wall.png");
}

SDL_Texture* TextureManager::CreateTextureC(SDL_Renderer* render) {
	return IMG_LoadTexture(render, "character.png");
}

SDL_Texture* TextureManager::CreateTextureO(SDL_Renderer* render) {
	return IMG_LoadTexture(render, "object.png");	
}
