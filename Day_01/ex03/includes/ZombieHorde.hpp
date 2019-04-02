
#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(void);
	ZombieHorde(int N);
	~ZombieHorde(void);
	void	horde_announce(void);
private:
	int		zombie_num;
	Zombie	*horde;
};

#endif
