
#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
public:

	std::string		name;
	Weapon			weap;

	HumanB			(std::string name);
	void			attack(void);
	void			setWeapon(Weapon wep);
private:

};

#endif
