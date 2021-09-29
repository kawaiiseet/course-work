#include "Character.h"

int screenWidth = 800;
int screenHeight = 640;

Character::Character(SDL_Renderer *render) {
	score = 0;
	speed = 10;
	direction = 1;
	this->character_texture = TextureManager::CreateTextureC(render);
	character_rect.x = screenWidth / 2; character_rect.y = screenHeight / 2;
	character_rect.w = 32; character_rect.h = 32;
}

bool Character::HitCheck(SDL_Rect ObjectA, SDL_Rect ObjectB) {	//условие пересечения 
	if (SDL_HasIntersection(&ObjectA, &ObjectB))
		return true;
	return false;
}

SDL_Rect Character::GetRect() {
	return this->character_rect;
}

int Character::GetDirection() {
	return this->direction;
}

void Character::SetDirection(int direction) {
	this->direction = direction;
}

void Character::MoveDown() {
	this->character_rect.y += this->speed * this->direction;
}

void Character::MoveUp() {
	this->character_rect.y -= this->speed * this->direction;
}

void Character::MoveLeft() {
	this->character_rect.x -= this->speed * this->direction;
}

void Character::MoveRight() {
	this->character_rect.x += this->speed * this->direction;
}

int Character::GetRectY() {
	return this->character_rect.y;
}

int Character::GetRectX() {
	return this->character_rect.x;
}

void Character::SetRectY(int y) {
	this->character_rect.y = y;
}

void Character::SetRectX(int x) {
	this->character_rect.x = x;
}

void Character::ScoreInc() {
	this->score++;
}

SDL_Texture* Character::GetTexture() {
	return this->character_texture;
}

int Character::GetScore() {
	return this->score;
}