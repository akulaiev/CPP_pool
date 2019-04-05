

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"

class ScavTrap
{
public:

	ScavTrap			(void);
	ScavTrap			(ScavTrap const & inst);
	ScavTrap			(std::string name);
	~ScavTrap			(void);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				challengeNewcomer(std::string const & target);
	int					get_energy(void);
	int					get_HP(void);
private:

	int					_HP;
	int					_MAX_HP;
	int					_energy;
	int					_MAX_energy;
	int					_lvl;
	std::string			_name;
	int					_melle;
	int					_ranged;
	int					_armor;
};

#endif
