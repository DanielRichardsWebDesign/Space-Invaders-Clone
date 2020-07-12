#include "Game.h"

/*//////////////////////
//	Private Functions //
*///////////////////////

//Initialise class variables.
void Game::initVariables()
{

}

//Initialise view screen
void Game::initWindow()
{
	this->videoMode = sf::VideoMode(800, 600);
	this->window = new sf::RenderWindow(this->videoMode, "Space Invaders", sf::Style::Close | sf::Style::Titlebar);
	this->window->setFramerateLimit(60);
}


/*////////////////////////////////
//	Constructor & Deconstructor //
*/////////////////////////////////

//Constructor
Game::Game()
{
	this->initVariables();
	this->initWindow();
}

//Deconstructor
Game::~Game()
{

}


/*/////////////////////
//	Public Functions //
*//////////////////////

//Ensure window is open whilst running.
const bool Game::running() const
{
	return this->window->isOpen();
}

void Game::pollEvents()
{
	while (this->window->pollEvent(this->sfmlEvent))
	{
		switch (this->sfmlEvent.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->sfmlEvent.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	}
}

void Game::update()
{
	this->pollEvents();
}

void Game::render()
{
	//Clear window first before rendering
	this->window->clear();

	this->window->display();
}
