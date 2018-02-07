#include "Ship.h"

Ship::Ship()
{
	rect.setSize(sf::Vector2f(32, 32));
	rect.setPosition(400, 200);
	rect.setFillColor(sf::Color::Blue);
	sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
}


void Ship::updateMove() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		if (canMoveLeft) {
			
		}
	}
}