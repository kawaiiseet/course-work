#include "Map.h"

int Map::lvl1[20][25] = {
{ 1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1 },
{ 1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1 },
{ 1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1 },
{ 1,1,1,1,1,0,0,1,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
};

int Map::lvl2[20][25] = {
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,2,0,0,0,0,1,0,0,0,0,0,0,0,0,0 },
{ 1,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0 },
{ 1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1 },
};

int Map::lvl3[20][25] = {
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,0,0,0,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1 },
{ 1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,1,0,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,1,1,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,1,0,0,0,0,2,0,0,1,0,0,0,1,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,1,1,1,1,1,0,0,1,1,0,0,0,1,1,1,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
};

Map::Map(SDL_Renderer* render, std::vector <Object>& bounty, std::vector <Wall>& wall)
{
	this->background_texture = TextureManager::CreateTextureB(render);
	this->object_texture = TextureManager::CreateTextureO(render);
	this->wall_texture = TextureManager::CreateTextureW(render);
	LoadMap(lvl1, wall, bounty, render, 1);
	src.x = src.y = 0;
	src.w = dst.w = 32;
	src.h = dst.h = 32;
}

void Map::DrawMap(SDL_Renderer* render) {
	int type = 0;
	int i = 0;
	for (int row = 0; row < 20; row++)
		for (int column = 0; column < 25; column++)
		{
			type = map[row][column];
			dst.x = column * 32;
			dst.y = row * 32;	//?????????? ?? 32 ??????? ??????

			switch (type)
			{
			case 0:
				SDL_RenderCopy(render, background_texture, &src, &dst);
				break;
			case 1:
				SDL_RenderCopy(render, wall_texture, &src, &dst);
				break;
			case 2:
				SDL_RenderCopy(render, background_texture, &src, &dst);	//????? ?? ???? ??????????
				SDL_RenderCopy(render, object_texture, &src, &dst);	
				break;
			}
		}
}

void Map::LoadMap(int lvl[20][25], std::vector <Wall>& wall, std::vector<Object>& bounty, SDL_Renderer* render, int n_lvl) {	//???????? ???????
	SetLvl(n_lvl);																												//????????????? ????? ??????
	bool check = ((checkpoint[0] && GetLvl() == 1) || (checkpoint[1] && GetLvl() == 2));										//????????? ?????????

	for (int row = 0; row < 20; row++)				
		for (int column = 0; column < 25; column++) 
			map[row][column] = lvl[row][column];																				//?????????? ???????? ??????

	Random();																													//????????? ????????????? ????????

	if (check)																													//???? ??????? ?? ????????? ???????, ? ????? ????????? ?? ??????????, ?? ??????? ?????????
		for (int row = 0; row < 20; row++)
			for (int column = 0; column < 25; column++)
				if (map[row][column] == 2)
					map[row][column] = 0;	

	SetCoordinates(wall, bounty, render);																						//??????????? ??????????
}

void Map::DeleteTheBounty(int column, int row) {	//??????? ?????????
	row /= 32;
	column /= 32;
	map[row][column] = 0;
}

void Map::SetCoordinates(std::vector <Wall>& wall, std::vector<Object>&bounty, SDL_Renderer* render) {
	int type = 0;
	int i = 0;
	int j = 0;
	if (!wall.empty())
		wall.clear();	//??? ???????? ?? ????? ??????? ??????? ???? ? ???????? ?????? ???? ?????
	if (!bounty.empty())
		bounty.clear();
	for (int row = 0; row < 20; row++)
		for (int column = 0; column < 25; column++)
		{
			type = map[row][column];
			dst.x = column * 32;
			dst.y = row * 32;	
			switch (type)
			{
			case 0:
				break;
			case 1: {
				Wall tempW(render);
				wall.push_back(tempW);
				wall[i].SetX(dst.x);
				wall[i++].SetY(dst.y);	//?????????? ?????????? ?????? ????
				break;
			}
			case 2: {
				Object tempO(render);
				bounty.push_back(tempO);
				bounty[j].SetRectX(dst.x);
				bounty[j++].SetRectY(dst.y);	//?????????? ?????????? ?????? ????????
				break;
			}
			}
		}
}

void Map::SetLvl(int n_lvl) {
	this->n_lvl = n_lvl;
}

int Map::GetLvl() {
	return this->n_lvl;
}

void Map::SetCheckpoint(int n_lvl) {
	if (n_lvl == 1)
		checkpoint[0] = true;
	if (n_lvl == 2)
		checkpoint[1] = true;
	if (n_lvl == 3)
		checkpoint[2] = true;
}

bool Map::GetCheckpoint()
{
	return (checkpoint[0] && checkpoint[1] && checkpoint[2]);
}

void Map::Random() {
	int x, y;
	int i = 0;
	for (i = 0; i < 3; i++) {	//?????? ?????????? ???????? (????? ????? while (i < n), ?? ???????? ????? ??????? ??????)
		srand(static_cast<unsigned int>(time(0) + i));
		x = rand() % 20;
		y = rand() % 25;
		if (map[x][y] == 0)	//???? ??? ?????? "????????", ?? ????? ????????? ?????????
		{
			map[x][y] = 2;
		}
	}
}

