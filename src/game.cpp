#include "game.hpp"

using namespace sf;


void Game::run()
{
    update();
    render();
}

void Game::init()
{
    window.create(VideoMode({ 720, 480 }), "RPG Thing");
}

void Game::update()
{
    while (auto event = window.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            window.close();
        }
    }
}


void Game::render()
{
	window.clear();
	window.display();
}