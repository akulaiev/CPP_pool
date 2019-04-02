
#include "./includes/ZombieHorde.hpp"
#include "./includes/Zombie.hpp"
#include <string>
#include <iostream>

ZombieHorde::ZombieHorde(void) {}

ZombieHorde::ZombieHorde(int N)
{
	std::string		zombie_name[21];
	std::string		zombie_type[21];
	int				i;
	int				j;

	srand(time(NULL));
	zombie_name[0] = "James";
	zombie_name[1] = "Lee";
	zombie_name[2] = "Tom";
	zombie_name[3] = "Matt";
	zombie_name[4] = "Sam";
	zombie_name[5] = "Robert";
	zombie_name[6] = "Jon";
	zombie_name[7] = "Simon";
	zombie_name[8] = "Chris";
	zombie_name[9] = "Van";
	zombie_name[10] = "Dan";
	zombie_name[11] = "Evan";
	zombie_name[12] = "Jimmy";
	zombie_name[13] = "Brandon";
	zombie_name[14] = "Patrick";
	zombie_name[15] = "Josh";
	zombie_name[16] = "Dave";
	zombie_name[17] = "Luke";
	zombie_name[18] = "Sean";
	zombie_name[19] = "Lenny";
	zombie_name[20] = "Elon";

	zombie_type[0] = "green";
	zombie_type[1] = "hungry";
	zombie_type[2] = "old";
	zombie_type[3] = "slow";
	zombie_type[4] = "mad";
	zombie_type[5] = "sad";
	zombie_type[6] = "young";
	zombie_type[7] = "fast";
	zombie_type[8] = "creepy";
	zombie_type[9] = "crazy";
	zombie_type[10] = "running";
	zombie_type[11] = "crying";
	zombie_type[12] = "screaming";
	zombie_type[13] = "fat";
	zombie_type[14] = "big";
	zombie_type[15] = "small";
	zombie_type[16] = "strange";
	zombie_type[17] = "funny";
	zombie_type[18] = "silent";
	zombie_type[19] = "bad";
	zombie_type[20] = "shouting";

	this->zombie_num = N;
	this->horde = new Zombie[N];
	i = -1;
	while(++i < N)
	{
		j = rand() % 20;
		this->horde[i].set_zombie_name(zombie_name[j]);
		this->horde[i].set_zombie_type(zombie_type[j]);
	}
}

ZombieHorde::~ZombieHorde()
{
	if (this->zombie_num > 0)
		delete [] this->horde;
}

void		ZombieHorde::horde_announce(void)
{
	int		i;

	i = -1;
	while(++i < this->zombie_num)
		this->horde[i].announce(this->horde[i].get_zombie_type(),
		this->horde[i].get_zombie_name());
}
