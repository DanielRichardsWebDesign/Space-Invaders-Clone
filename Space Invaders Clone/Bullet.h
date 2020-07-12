#ifndef BULLET_H
#define BULLET_H

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Network.hpp"

#include <iostream>

class Bullet
{
private:
	//Variables
	sf::RectangleShape shape;

	sf::Vector2f direction;
	float moveSpeed;

	//Private Functions
	void initShape();

public:
	Bullet();
	Bullet(float dirY, float moveSpeed);
	virtual ~Bullet();

	//Public Functions
	void update();
	void render(sf::RenderTarget* target);
};

#endif

