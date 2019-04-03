
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
public:

	std::string		name;
	Weapon			weap;
	
	HumanA			(std::string name, Weapon weap);
	void			attack(void);
private:

};

#endif
