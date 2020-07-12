#include "Game.h"

int main()
{
	//Initialise Game object
	Game game;

	//Game Loop
	while (game.running())
	{
		//Update Window
		game.update();

		//Render to Window
		game.render();
	}

	//End of Application
	return 0;
}