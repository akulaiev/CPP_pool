
#include "./includes/Zombie.hpp"
#include <string>
#include <iostream>

void			Zombie::set_zombie_type(std::string your_type)
{
	this->type = your_type;
}

void			Zombie::set_zombie_name(std::string your_name)
{
	this->name = your_name;
}

std::string			Zombie::get_zombie_type(void)
{
	return (this->type);
}

std::string			Zombie::get_zombie_name(void)
{
	return (this->name);
}

void			Zombie::announce(std::string type, std::string name) const
{
	std::cout << name << " " << type << " " << "Braiiiiiiinnnssss..." << std::endl;
}