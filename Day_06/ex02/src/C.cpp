
#include "../includes/C.hpp"
#include <iostream>

C::C	(void) {}

C::C	(C & inst)
{
	*this = inst;
}

C::~C			(void) {}

C &	C::operator=(C & inst)
{
	(void)inst;
	return *this;
}
