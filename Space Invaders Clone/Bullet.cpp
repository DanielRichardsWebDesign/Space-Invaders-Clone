#include "Bullet.h"

/*//////////////////////
//	Private Functions //
*///////////////////////

void Bullet::initShape()
{
	this->shape.setFillColor(sf::Color::Green);
	this->shape.setSize(sf::Vector2f(64.f, 32.f));
}

/*////////////////////////////////
//	Constructor & Deconstructor //
*/////////////////////////////////


Bullet::Bullet()
{
	initShape();
}

Bullet::Bullet(float dirY, float moveSpeed)
{
	this->direction.y = dirY;
	this->moveSpeed = moveSpeed;
}

Bullet::~Bullet()
{

}

/*/////////////////////
//	Public Functions //
*//////////////////////

void Bullet::update()
{
	//Update Movement
	this->shape.move(this->moveSpeed * this->direction);
}

void Bullet::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
