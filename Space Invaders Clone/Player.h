#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

class Player
{
private:
	//Variables
	sf::RectangleShape shape;

	float moveSpeed;
	int lives;

	//Private Functions
	void initVariables();
	void initShape();

public:
	//Constructor & Destructor
	Player(float x = 350.f, float y = 500.f);
	~Player();

	//Public Functions
	void updateInput();
	void update(sf::RenderTarget* target);


	void render(sf::RenderTarget* target);
};

