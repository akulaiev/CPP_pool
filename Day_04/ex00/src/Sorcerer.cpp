
#include "../includes/Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer	(void) {}

Sorcerer::Sorcerer	(Sorcerer const & inst)
{
	*this = inst;
}

Sorcerer::Sorcerer	(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << name + ", " + title + ", is born !" <<
	std::endl;
}

Sorcerer::~Sorcerer	(void)
{
	std::cout << this->_name + ", " + this->_title +
	", is dead. Consequences will never be the same !" <<
	std::endl;
}

std::string				Sorcerer::get_title(void)
{
	return (this->_title);
}

std::string		Sorcerer::get_name(void)
{
	return (this->_name);
}

void			Sorcerer::set_title(std::string val)
{
	this->_title = val;
}

void			Sorcerer::set_name(std::string name)
{
	this->_name = name;
}

void				Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream &		operator<<(std::ostream & os,
Sorcerer & inst)
{
	return (os << "I am " + inst.get_name() + ", " + 
	inst.get_title() + ", and I like ponies !") << std::endl;
}
