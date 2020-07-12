#pragma once

//Include game related classes
#include "Player.h"

class Game
{
private:
	//Variables
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	sf::Event sfmlEvent;

	//Points
	int points;
	sf::Font font;
	sf::Text pointsText;

	//Player Object
	Player player;

	//Private Functions
	void initVariables();
	void initWindow();

public:
	//Constructor and Deconstructor
	Game();
	~Game();

	//Accessors


	//Public Functions
	const bool running() const;
	void pollEvents();
	void updatePlayer();
	void update();

	void render();
};

