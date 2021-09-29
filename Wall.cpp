#include "Wall.h"


Wall::Wall(SDL_Renderer* render) {
	this->wall_texture = TextureManager::CreateTextureW(render);
	wall_rect.w = 32; wall_rect.h = 32;
}

void Wall::SetX(int x) {
	this->wall_rect.x = x;
}

void Wall::SetY(int y) {
	this->wall_rect.y = y;
}

SDL_Rect Wall::GetRect()
{
		return this->wall_rect;
}

