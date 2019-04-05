

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
	
	int					get_HP(void);
	int					get_MAX_HP(void);
	int					get_energy(void);
	int					get_MAX_ENERGY(void);
	int					get_level(void);
	int					get_melle(void);
	int					get_ranged(void);
	int					get_armor(void);
	std::string			get_name(void);
	void				set_HP(int val);
	void				set_MAX_HP(int val);
	void				set_energy(int val);
	void				set_MAX_ENERGY(int val);
	void				set_level(int val);
	void				set_melle(int val);
	void				set_ranged(int val);
	void				set_armor(int val);
	void				set_name(std::string name);
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
