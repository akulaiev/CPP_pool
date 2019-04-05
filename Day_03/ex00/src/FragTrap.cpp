#include "../includes/FragTrap.hpp"
#include <iostream>
#include <cmath>

FragTrap::FragTrap	(void)
{
	std::cout << "THE DEFAULT CONSTRUCTOR is called.\
Booting sequence complete... Hello! I am your new steward bot."
	<< std::endl;
}

FragTrap::FragTrap	(FragTrap const & inst)
{
	std::cout << "Look out everybody! Things are about to\
get awesome! Oh, and by the way, THE COPY CONSTRUCTOR is called" <<
	std::endl;
	*this = inst;
}

FragTrap::FragTrap	(std::string name)
{
	std::cout << std::endl << "Directive one: Protect humanity! Directive two: use \
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
	std::cout << std::endl << "The fight is over!!! The enemy is \
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

int				FragTrap::get_energy(void)
{
	return (this->_energy);
}

int				FragTrap::get_HP(void)
{
	return (this->_HP);
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
	if (this->_energy >= 0)
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
