
#include "./includes/Weapon.hpp"

Weapon::Weapon		(std::string weapon_type) : type(weapon_type) {}

const std::string	&Weapon::getType()
{
	std::string		&weapon_type = this->type;
	return (weapon_type);
}

void				Weapon::setType(std::string type)
{
	this->type = type;
}