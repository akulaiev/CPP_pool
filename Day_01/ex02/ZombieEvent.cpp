
#include "./includes/ZombieEvent.hpp"
#include "./includes/Zombie.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <new>

void			ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie			*ZombieEvent::newZombie(std::string name)
{
	Zombie			*new_zombie;
	ZombieEvent		event;
	std::string		zombie_type[5];
	int				i;

	srand(time(NULL));
	zombie_type[0] = "green";
	zombie_type[1] = "hungry";
	zombie_type[2] = "old";
	zombie_type[3] = "slow";
	zombie_type[4] = "mad";
	i = rand() % 4;
	event.setZombieType(zombie_type[i]);
	new_zombie = new Zombie;
	new_zombie->set_zombie_type(event.type);
	new_zombie->set_zombie_name(name);
	return (new_zombie);
}

void			ZombieEvent::randomChump(void)
{
	std::string		zombie_name[13];
	Zombie			*new_zombie;
	int				i;

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
	i = rand() % 12;
	new_zombie = ZombieEvent::newZombie(zombie_name[i]);
	new_zombie->announce(new_zombie->get_zombie_type(),
	new_zombie->get_zombie_name());
	delete new_zombie;
}
