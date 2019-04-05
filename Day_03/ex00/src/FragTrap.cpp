#include "../includes/FragTrap.hpp"
#include <iostream>
#include <cmath>

FragTrap::FragTrap	(void)
{
	std::cout << "FragTrap: THE DEFAULT CONSTRUCTOR is called.\
Booting sequence complete... Hello! I am your new steward bot."
	<< std::endl;
}

FragTrap::FragTrap	(FragTrap const & inst)
{
	std::cout << "FragTrap: Look out everybody! Things are about to\
get awesome! Oh, and by the way, THE COPY CONSTRUCTOR is called" <<
	std::endl;
	*this = inst;
}

FragTrap::FragTrap	(std::string name)
{
	std::cout << std::endl << "FragTrap: Directive one: Protect humanity! Directive two: use \
THE PARAMETRIC CONSTRUCTOR.\nDirective three: Dance!" <<
	std::endl << std::endl;

	this->_HP = 100;
	this->_MAX_HP = 100;
	this->_energy = 100;
	this->_MAX_energy = 100;
	this->_lvl = 1;
	this->_melle = 30;
	this->_ranged = 20;
	this->_armor = 5;
	this->_name = name;
}

FragTrap::~FragTrap	(void)
{
	std::cout << std::endl << "FragTrap: The fight is over!!! The enemy is \
DESTRUCTED!" << std::endl << std::endl;
}

void			FragTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << target <<
	" at range, causing " << this->_ranged << " points of damage!" <<
	std::endl;
}

void			FragTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << target <<
	" at melee, causing " << this->_melle << " points of damage!" <<
	std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " is damaged with  " <<
	amount << " points of damage!" << std::endl;
	this->_HP = fmax(0, this->_HP - amount +
	this->_armor);
}

void			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is repaided with  " <<
	amount << " health points!" << std::endl;
	this->_HP = fmin(this->_MAX_HP, this->_HP + amount);
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		attack[13];
	int				i;
	int				j;

	attack[0] = " piu-piu-pius ";
	attack[1] = " bites ";
	attack[2] = " judgmentally rolls eyes on ";
	attack[3] = " calls " + target + " names";
	attack[4] = " screams and shouts at ";
	attack[5] = " turns on some bad rap music to ";
	attack[6] = " kicks " + target + "'s ass";
	attack[7] = " says " + target + " looks fat";
	attack[8] = " spanks ";
	attack[9] = " says " + target + " codes like a little girl";
	attack[10] = " says " + target + " looks like a potato";
	attack[11] = " shows some kung-fu to ";
	attack[12] = " throws exceptions at ";
	i = rand() % 12;
	void (FragTrap::*func[])(std::string const & target) =
	{&FragTrap::meleeAttack, &FragTrap::rangedAttack};
	j = rand() % 51;
	j = j % 2;
	if (this->_energy > 0)
	{
		if (i == 6 || i == 7 || i == 9 || i == 10 ||
		i == 3)
			(this->*func[j])(attack[i]);
		else
			(this->*func[j])(attack[i] + target);
		this->_energy -= 25;
	}
	else
		std::cout << this->_name << " is out of energy :( " << std::endl;
}

int				FragTrap::get_HP(void)
{
	return (this->_HP);
}

int				FragTrap::get_MAX_HP(void)
{
	return (this->_MAX_HP);
}

int				FragTrap::get_energy(void)
{
	return (this->_energy);
}

int				FragTrap::get_MAX_ENERGY(void)
{
	return (this->_MAX_energy);
}

int				FragTrap::get_level(void)
{
	return (this->_lvl);
}

int				FragTrap::get_melle(void)
{
	return (this->_melle);
}

int				FragTrap::get_ranged(void)
{
	return (this->_ranged);
}

int				FragTrap::get_armor(void)
{
	return (this->_armor);
}

std::string		FragTrap::get_name(void)
{
	return (this->_name);
}

void			FragTrap::set_HP(int val)
{
	this->_HP = val;
}

void			FragTrap::set_MAX_HP(int val)
{
	this->_MAX_HP = val;
}

void			FragTrap::set_energy(int val)
{
	this->_energy = val;
}

void			FragTrap::set_MAX_ENERGY(int val)
{
	this->_MAX_energy = val;
}

void			FragTrap::set_level(int val)
{
	this->_lvl = val;
}

void			FragTrap::set_melle(int val)
{
	this->_melle = val;
}

void			FragTrap::set_ranged(int val)
{
	this->_ranged = val;
}

void			FragTrap::set_armor(int val)
{
	this->_armor = val;
}

void			FragTrap::set_name(std::string name)
{
	this->_name = name;
}
