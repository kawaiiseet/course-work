#pragma once
#include "SDL.h"
#include "Wall.h"
#include "Object.h"
#include "TextureManager.h"
#include <iostream>
#include <vector>

class Map {
public:
	static int lvl1[20][25];
	static int lvl2[20][25];
	static int lvl3[20][25];	//по-хорошему нужно сделать геттеры, но у меня не получилось

	Map(SDL_Renderer* render, std::vector <Object>& bounty, std::vector <Wall>& wall);
	void LoadMap(int lvl[20][25], std::vector <Wall>& wall, std::vector<Object>& bounty, SDL_Renderer* render, int n_lvl);
	void DrawMap(SDL_Renderer* render);
	void SetCoordinates(std::vector<Wall>& wall,std::vector<Object>& bounty, SDL_Renderer* render);
	void DeleteTheBounty(int column, int row);
	void SetCheckpoint(int n_lvl);	
	bool GetCheckpoint();
	void Random();
	void SetLvl(int n_lvl);
	int GetLvl();

private:
	int n_lvl;
	int map[20][25];
	bool checkpoint[3];
	
	SDL_Texture* background_texture;
	SDL_Texture* wall_texture;
	SDL_Texture* object_texture;
	SDL_Rect src;
	SDL_Rect dst;
};

