
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
public:

	FragTrap			(void);
	FragTrap			(FragTrap const & inst);
	FragTrap			(std::string name);
	~FragTrap			(void);

	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	void				vaulthunter_dot_exe(std::string const & target);
	
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
