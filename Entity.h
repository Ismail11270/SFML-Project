#pragma once
#include <SFML\Graphics.hpp>
#include "var.h"

class Var {
protected:
	sf::Sprite shape;
	sf::Text lbl;
	sf::Texture texture;
	sf::String File;
	int HPStart;

	
	bool canHeal;
	bool canDrop;
	bool canMove;
	int HPMax;
	int HP;

	int lvl;
	float speed;
};

class Entity : protected Var
{
public:
	sf::Sprite getShape(){
		return shape;
	}

	int getHP();
	void setLvl_(int n);
	bool canShoot;
	int getLvl();
	void drawTo(sf::RenderWindow *window);
	void move(float x, float y);
	void setPos(float x, float y);
	sf::Vector2f getPos();
	sf::FloatRect getBounds();
	int getHPmax();
	float getSpeed();
	void takeDamage(int lvl);
	sf::Vector2f getSize();
	void setHP(int n);
	
};

