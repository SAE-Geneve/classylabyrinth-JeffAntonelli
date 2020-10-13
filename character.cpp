#include "character.h"

#include <iostream>

Character::Character(std::string name) : health_points_(100)
{
}
void Character::recevoirDegats(int degats)
{
	health_points_ -= degats;
}

void Character::attack(Character& target) const
{
	target.recevoirDegats(attack);
}

void Character::information() const
{
	std::cout <<
}
