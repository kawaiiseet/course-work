#pragma once
#include "SDL.h"
#include "TextureManager.h"
#include <iostream>

extern int screenWidth;
extern int screenHeight;

class Character {
private:
	int score;
	int speed;
	int direction;
	SDL_Texture* character_texture;
	SDL_Rect character_rect;

public:
	Character(SDL_Renderer* render);
	bool HitCheck(SDL_Rect object_rect, SDL_Rect character_rect);
	SDL_Rect GetRect();
	int GetDirection();
	void SetDirection(int direction);
	void MoveDown();
	void MoveUp();
	void MoveLeft();
	void MoveRight();
	int GetRectY();
	int GetRectX();
	void SetRectY(int y);
	void SetRectX(int x);
	void ScoreInc();
	int GetScore();
	SDL_Texture* GetTexture();
};