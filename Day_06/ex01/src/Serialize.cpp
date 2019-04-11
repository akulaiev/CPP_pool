
#include "../includes/Serialize.hpp"
#include <iostream>

Serialize::Serialize() {}

Serialize::Serialize (Serialize const & inst)
{
	*this = inst;
}

Serialize::~Serialize	(void) {}

Serialize &		Serialize::operator=(Serialize const & inst)
{
	(void)inst;
	return *this;	
}
