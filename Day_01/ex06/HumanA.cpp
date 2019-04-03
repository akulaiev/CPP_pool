
#include "./includes/HumanA.hpp"
#include "./includes/Weapon.hpp"
#include <iostream>
#include "./includes/Weapon.hpp"
#include "./includes/HumanB.hpp"

HumanA::HumanA	(std::string name, Weapon weap) : name(name), weap(weap) {}

void			HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " <<
	this->weap.type << std::endl;
}
