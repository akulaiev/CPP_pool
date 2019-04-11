
#include "../includes/A.hpp"
#include <iostream>

A::A	(void) {}

A::A	(A & inst)
{
	*this = inst;
}

A::~A			(void) {}

A &	A::operator=(A & inst)
{
	(void)inst;
	return *this;
}
