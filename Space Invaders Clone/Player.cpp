#include "Player.h"

/*//////////////////////
//	Private Functions //
*///////////////////////

void Player::initVariables()
{
	this->moveSpeed = 5.f;
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

void Player::updateWindowBoundsCollision(sf::RenderTarget* target)
{
	//Left Boundary Collision	
	if (this->shape.getGlobalBounds().left <= 0.f)
		this->shape.setPosition(0.f, this->shape.getGlobalBounds().top);
	//Right Boundary Collision
	if (this->shape.getGlobalBounds().left + this->shape.getGlobalBounds().width >= target->getSize().x)
		this->shape.setPosition(target->getSize().x - this->shape.getGlobalBounds().width, this->shape.getGlobalBounds().top);
}

void Player::update(sf::RenderTarget* target)
{
	//Update Input
	this->updateInput();

	//Window Boundaries - Collision
	this->updateWindowBoundsCollision(target);
}

void Player::render(sf::RenderTarget* target)
{
	//Draw Player
	target->draw(this->shape);
}
