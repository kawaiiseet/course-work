#pragma once
#include "SDL.h"
#include "Character.h"
#include "Map.h"
#include "Wall.h"
#include "Menu.h"
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

class Game {
public:
	void Init(const char* title, int xpos, int ypos, int width, int height);
	void LoadMenu();
	void Event();
	void Update();
	void Render();
	void Clean();
	bool Running();
	void GameOver();

private:
	bool run;
	SDL_Window* window;
	SDL_Renderer* render;
	SDL_Event ev;
	SDL_Event menu_ev;
	Character* amogus;
	Map* map;
	Menu* menu;
	std::vector <Object> bounty;
	std::vector <Wall> wall;
};