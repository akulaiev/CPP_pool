
#include "../includes/ClapTrap.hpp"
#include <iostream>
#include <cmath>

ClapTrap::ClapTrap	(void)
{
	std::cout << "Parent class default constructor is called."
	<< std::endl;
}

ClapTrap::ClapTrap	(ClapTrap const & inst)
{
	std::cout << "Parent class copy constructor is called." <<
	std::endl;
	*this = inst;
}

ClapTrap::ClapTrap	(std::string name)
{
	std::cout << std::endl << "Parent class parametric constructor is called." <<
	std::endl << std::endl;

	this->_HP = 100;
	this->_MAX_HP = 100;
	this->_lvl = 1;
	this->_name = name;
}

ClapTrap::~ClapTrap	(void)
{
	std::cout << std::endl << "Parent class destructor constructor is called." << std::endl << std::endl;
}


void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Range challenge:  " << this->_name << target <<
	" causing " << this->_ranged << " points of damage!" <<
	std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Melee challenge: " << this->_name << target <<
	" causing " << this->_melle << " points of damage!" <<
	std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " is damaged with  " <<
	amount << " points of damage!" << std::endl;
	this->_HP = fmax(0, this->_HP - amount +
	this->_armor);
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is repaided with  " <<
	amount << " health points!" << std::endl;
	this->_HP = fmin(this->_MAX_HP, this->_HP + amount);
}

int				ClapTrap::get_energy(void)
{
	return (this->_energy);
}

int				ClapTrap::get_HP(void)
{
	return (this->_HP);
}
