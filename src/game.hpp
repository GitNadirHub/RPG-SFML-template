#pragma once

#include <SFML/Graphics.hpp>

class Game {
public:
	void init();
	void run();
private:
	sf::RenderWindow window;
	void update();
	void render();
};