#ifndef B_HPP
# define B_HPP

#include <iostream>
#include "Base.hpp"

class B : public Base
{
public:

	B			(void);
	B			(B &inst);
	virtual ~B	(void);

	B &			operator=(B & inst);
private:

};

#endif
