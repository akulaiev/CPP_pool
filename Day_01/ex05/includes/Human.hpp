
#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
public:

	Brain const		brain;
	std::string		identify(void) const;
	Brain			getBrain() const;
private:

};

#endif
