

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:

	NinjaTrap			(void);
	NinjaTrap			(NinjaTrap const & inst);
	NinjaTrap			(std::string name);
	~NinjaTrap			(void);
	void				ninjaShoebox(FragTrap & frag);
	void				ninjaShoebox(ScavTrap & scav);
	void				ninjaShoebox(NinjaTrap & ninja);
	void				ninjaShoebox(ClapTrap);
private:

};

#endif
