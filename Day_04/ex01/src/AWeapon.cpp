
#include "../includes/AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon	(void) {}

AWeapon::AWeapon	(AWeapon const & inst)
{
	*this = inst;
}

AWeapon::AWeapon	(std::string const & name,
int apcost, int damage) : _name(name), _apcost(apcost),
_damage(damage) {}

AWeapon::~AWeapon	(void) {}
