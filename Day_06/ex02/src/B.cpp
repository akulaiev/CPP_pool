#include "../includes/B.hpp"
#include <iostream>

B::B	(void) {}

B::B	(B & inst)
{
	*this = inst;
}

B::~B			(void) {}

B &	B::operator=(B & inst)
{
	(void)inst;
	return *this;
}
