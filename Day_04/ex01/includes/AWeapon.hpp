
#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
public:

	AWeapon			(void);
	AWeapon			(AWeapon const & inst);
	AWeapon			(std::string const & name,
	int apcost, int damage);
	~AWeapon		(void);

	std::string 	getName(void) const;
	int				getAPCost(void) const;
	int				getDamage(void) const;
	void	 		setName(std::string name) const;
	void			setAPCost(int) const;
	void			setDamage(int) const;
	virtual void	attack(void) const = 0;
private:
	std::string const & _name;
	int					_apcost;
	int 				_damage;
};

#endif
