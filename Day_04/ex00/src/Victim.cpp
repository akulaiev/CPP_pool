
#include "../includes/Victim.hpp"
#include <iostream>

Victim::Victim	(void) {}

Victim::Victim	(Victim const & inst)
{
	*this = inst;
}

Victim::Victim	(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " +
	this->_name + " just popped !" << std::endl;
}

Victim::~Victim	(void)
{
	std::cout << "Victim " + this->_name +
	" just died for no apparent reason !" << std::endl;
}

std::string		Victim::get_name(void) const
{
	return (this->_name);
}

void			Victim::set_name(std::string name)
{
	this->_name = name;
}

void				Victim::getPolymorphed(void) const
{
	std::cout << this->_name + " has been turned into a cute little sheep !" 
	<< std::endl;
}

std::ostream &		operator<<(std::ostream & os,
Victim & inst)
{
	return (os << "I'm " + inst.get_name() + " and I like otters !"
	<< std::endl);
}
