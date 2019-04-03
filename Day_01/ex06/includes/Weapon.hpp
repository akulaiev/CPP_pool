
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
public:
	std::string				type;

	Weapon					(std::string weapon_type);
	const std::string		&getType();
	void					setType(std::string type);
private:

};

#endif
