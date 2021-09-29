#include "Game.h"

void Game::Init(const char* title, int xpos, int ypos, int width, int height) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0 && IMG_Init(IMG_INIT_PNG) != 0) {
		window = SDL_CreateWindow(title, xpos, ypos, width, height, SDL_WINDOW_SHOWN);
		render = SDL_CreateRenderer(window, -1, 0);
		run = true;
	}
	else run = false;

	amogus = new Character(render);
	map = new Map(render, bounty, wall);
	menu = new Menu(render);
}

void Game::LoadMenu() {
	while (menu->Running()) {	//рендерим меню пока menu_run = true
		SDL_RenderClear(render);
		SDL_RenderCopy(render, menu->GetTexture(), NULL, NULL); 
		SDL_RenderPresent(render);
		std::ifstream file("Leaderboard.doc");
		std::string str;
		
		while (SDL_PollEvent(&menu_ev)) {
			switch (menu_ev.type) {
			case SDL_QUIT:
				menu->SetMenuRun(false);;
				run = false;
				break;
			case SDL_KEYDOWN:
				switch (menu_ev.key.keysym.sym) {
				case SDLK_ESCAPE:
					menu->SetMenuRun(false);
					run = false;
					break;
				case SDLK_1:
					menu->SetMenuRun(false);
					break;
				case SDLK_2:
					if (file.is_open())	//вывод из файла
					{
						std::cout << std::left << std::setw(22) << "Name" << "Score" << std::endl;
						std::cout << "---------------------------\n";
						while (std::getline(file, str))
							std::cout << str << std::endl;
					}
					else std::cout << "Cannot open the file" << std::endl;
					break;
				case SDLK_3:
					menu->SetMenuRun(false);
					run = false;
					break;
				}
			}
		}
	}
}

void Game::Event() {
	while (SDL_PollEvent(&ev)) {
		for (unsigned int i = 0; i < wall.size(); i++)	//проверка столкновения со стеной 
			if (amogus->HitCheck(amogus->GetRect(), wall[i].GetRect()))
				amogus->SetDirection(-1);
		switch (ev.type) {
		case SDL_QUIT:
			run = false;
			break;
		case SDL_KEYDOWN:
			switch (ev.key.keysym.sym) {
			case SDLK_ESCAPE:
				run = false;
				break;
			case SDLK_s:
				amogus->MoveDown();
				if (amogus->GetRectY() >= 640)
				{
					amogus->SetRectY(-39);
					map->LoadMap(map->lvl1, wall, bounty, render, 1);
				}
				break;
			case SDLK_w:
				amogus->MoveUp();
				if (amogus->GetRectY() <= -39)
				{
					amogus->SetRectY(screenHeight);	//если rect выходит за верхнюю границу (0) на всю длину, то rect выходит снизу на новый lvl
					map->LoadMap(map->lvl2, wall, bounty, render, 2);
				}
				break;
			case SDLK_d:
				amogus->MoveRight();
				if (amogus->GetRectX() >= 800)
				{
					amogus->SetRectX(-39);
					map->LoadMap(map->lvl3, wall, bounty, render, 3);
				}
				break;
			case SDLK_a:
				amogus->MoveLeft();
				if (amogus->GetRectX() <= -39) 
				{
					amogus->SetRectX(screenWidth);
					map->LoadMap(map->lvl2, wall, bounty, render, 2);
				}
				break;
			}
			break;
		}
	}
}

void Game::Update() {
	amogus->SetDirection(1);
	for (unsigned int i = 0; i < bounty.size(); i++)							//проверка столкновения с сокровищем
		if (amogus->HitCheck(amogus->GetRect(), bounty[i].GetRect())) {
			map->DeleteTheBounty(bounty[i].GetRectX(), bounty[i].GetRectY());	//стираем текстуру сокровища
			bounty[i].Hit(bounty, i);											//удаляем сокровище из вектора
			if (bounty.empty())
				map->SetCheckpoint(map->GetLvl());								//ставим чекпоинт если мы собрали все сокровища
			amogus->ScoreInc();
		}
}

void Game::Render()
{
	SDL_RenderClear(render);
	map->DrawMap(render);	//рендерим карту
	SDL_RenderCopy(render, amogus->GetTexture(), NULL, &amogus->GetRect());
	SDL_RenderPresent(render);
}

void Game::Clean() {
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();
}

bool Game::Running() {
	return run;
}

void Game::GameOver() {
	if (map->GetCheckpoint()) {	//проверяем, все ли уровни пройдены
		std::string str;
		std::ofstream file("Leaderboard.doc", std::ios_base::app);
		Clean();

		std::cout << "GAMEOVER!" << std::endl; 
		std::cout << "YOUR SCORE: " << amogus->GetScore() << std::endl;
		std::cout << "ENTER YOUR NAME: ";
		std::cin >> str;
		file << std::left << std::setw(15) << str << "|\t" << std::setw(5) << amogus->GetScore() << std::endl;
		file.close();

		run = false;
	}
}