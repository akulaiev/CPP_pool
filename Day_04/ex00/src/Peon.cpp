
#include "../includes/Peon.hpp"
#include <iostream>

Peon::Peon	(void) {}

Peon::Peon	(Peon const & inst)
{
	*this = inst;
}

Peon::Peon	(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon	(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void				Peon::getPolymorphed(void) const
{
	std::cout << this->get_name() + " has been turned into a pink pony !" 
	<< std::endl;
}
