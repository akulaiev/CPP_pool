
#include "../includes/Vilager.hpp"
#include <iostream>

Vilager::Vilager	(void) {}

Vilager::Vilager	(Vilager const & inst)
{
	*this = inst;
}

Vilager::Vilager	(std::string name) : Victim(name)
{
	std::cout << "Hi, I'm " + this->get_name() +
	". How do you like the weather today?"
	<< std::endl;
}

Vilager::~Vilager	(void)
{
	std::cout << "Aaaaaaa..." << std::endl;
}

void				Vilager::getPolymorphed(void) const
{
	std::cout << this->get_name() + " has been turned into a magical unicorn !" 
	<< std::endl;
}
