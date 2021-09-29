#include "Object.h"

Object::Object(SDL_Renderer* render) {
	this->object_texture = TextureManager::CreateTextureO(render);
	this->background_texture = TextureManager::CreateTextureB(render);
	object_rect.w = 32; object_rect.h = 32;
}

void Object::SetRectX(int x) {
	this->object_rect.x = x;
}

void Object::SetRectY(int y) {
	this->object_rect.y = y;
}

int Object::GetRectX() {
	return object_rect.x;
}

int Object::GetRectY() {
	return object_rect.y;
}

void Object::Hit(std::vector <Object> &bounty, int i) {
	bounty.erase(bounty.begin()+i);	//удаляем конкретное сокровище 
}

SDL_Rect Object::GetRect() {
	return object_rect;
}

