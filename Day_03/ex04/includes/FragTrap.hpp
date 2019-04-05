
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:

	FragTrap			(void);
	FragTrap			(FragTrap const & inst);
	FragTrap			(std::string name);
	~FragTrap			(void);

	void				vaulthunter_dot_exe(std::string const & target);
private:

};

#endif
