
#include "./includes/Brain.hpp" 
#include <string>
#include <iostream>
#include <sstream>

Brain::Brain()
{
	this->_addr = this;
}

std::string		Brain::identify(void) const
{
	std::stringstream pointer;

	pointer << this->_addr;
	std::string addr_str = pointer.str();
	return (addr_str);
}
