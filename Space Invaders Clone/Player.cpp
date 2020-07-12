#include "Player.h"

/*//////////////////////
//	Private Functions //
*///////////////////////

void Player::initVariables()
{
	this->moveSpeed = 3.f;
	this->lives = 5;
}

void Player::initShape()
{
	this->shape.setFillColor(sf::Color::White);
	this->shape.setSize(sf::Vector2f(64.f, 32.f));
}

/*////////////////////////////////
//	Constructor & Deconstructor //
*/////////////////////////////////

//Initialise Player object
Player::Player(float x, float y)
{
	this->shape.setPosition(x, y);

	this->initVariables();
	this->initShape();
}

Player::~Player()
{
}

/*/////////////////////
//	Public Functions //
*//////////////////////

void Player::updateInput()
{
	//Keyboard input
	//Left Movement
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		this->shape.move(-this->moveSpeed, 0.f);
	}
	//Right Movement
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		this->shape.move(this->moveSpeed, 0.f);
	}
}

void Player::update(sf::RenderTarget* target)
{
	//Update Input
	this->updateInput();
}

void Player::render(sf::RenderTarget* target)
{
	//Draw Player
	target->draw(this->shape);
}
