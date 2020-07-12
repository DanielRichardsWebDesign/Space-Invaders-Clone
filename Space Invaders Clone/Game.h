#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

class Game
{
private:
	//Variables
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	sf::Event sfmlEvent;

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

	void update();
	void render();
};

