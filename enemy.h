#pragma once

#include "character.h"

#include <string>

class Enemy : public Character {
public:
	int attack = 10;

protected:
	int defence_ = 2;
	int health_points_ = 50;
		std::string name_ = "Gob";
};