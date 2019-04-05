

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

	ScavTrap			(void);
	ScavTrap			(ScavTrap const & inst);
	ScavTrap			(std::string name);
	~ScavTrap			(void);
	void				challengeNewcomer(std::string const & target);
private:

};

#endif
