
#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:

	SuperTrap			(void);
	SuperTrap			(SuperTrap const & inst);
	SuperTrap			(std::string name);
	~SuperTrap			(void);
private:

};

#endif
