
#include "./includes/HumanB.hpp"
#include "./includes/Weapon.hpp"
#include <iostream>

HumanB::HumanB			(std::string name) : name(name), weap(NULL) {}

void			HumanB::setWeapon(Weapon wep)
{
	this->weap = wep;
}

void			HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " <<
	this->weap.type << std::endl;
}
