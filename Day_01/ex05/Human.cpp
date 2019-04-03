
#include "./includes/Human.hpp"
#include "./includes/Brain.hpp"
#include <string>
#include <iostream>

std::string	Human::identify(void) const
{
	return this->brain.identify();
}

Brain			Human::getBrain() const
{
	return this->brain;
}
