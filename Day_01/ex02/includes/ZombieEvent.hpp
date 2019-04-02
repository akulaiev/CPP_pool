
#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
public:
	void			randomChump(void);
private:
	std::string		type;
	std::string		name;

	void			setZombieType(std::string);
	Zombie			*newZombie(std::string name);
};

#endif
