#pragma once

#include "character.h"

#include <iostream>
#include <string>

class Hero : public Character {
public:
	int attack = 20;

protected:
	int defence_ = 5;
	int health_points_ = 100;
	Hero(std::string name_ = "Herrrrroooooooooooooooo");
	int experience_ = 0;
	int health_regen_ = 5;
};