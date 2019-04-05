

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
public:

	ClapTrap			(void);
	ClapTrap			(ClapTrap const & inst);
	ClapTrap			(std::string name);
	~ClapTrap			(void);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	int					get_energy(void);
	int					get_HP(void);
protected:

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
