#pragma once

#include <string>

class Character {
public:
	Character();
		int x;
	    int y;
	    void recevoirDegats(int degats);
		void attack(Character &target) const;
		void information() const;

protected:
	int health_points_;
	int defence_;
	Character(std::string name_);
};