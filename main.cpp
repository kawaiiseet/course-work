#include "Game.h"

int main(int argc, char* args[]) {

	Game* game = new Game();
	game->Init("GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight);
	game->LoadMenu();

	while (game->Running()) {	
		
		game->Event();
		game->Update();
		game->Render();
		game->GameOver();

	}

	return 0;
}

	