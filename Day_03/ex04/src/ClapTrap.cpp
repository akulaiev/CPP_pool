
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
	std::cout << std::endl << "Parent class destructor is called." << std::endl << std::endl;
}


void			ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "Range attack:  " << this->_name << target <<
	" causing " << this->_ranged << " points of damage!" <<
	std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "Melee attack: " << this->_name << target <<
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

int				ClapTrap::get_HP(void)
{
	return (this->_HP);
}

int				ClapTrap::get_MAX_HP(void)
{
	return (this->_MAX_HP);
}

int				ClapTrap::get_energy(void)
{
	return (this->_energy);
}

int				ClapTrap::get_MAX_ENERGY(void)
{
	return (this->_MAX_energy);
}

int				ClapTrap::get_level(void)
{
	return (this->_lvl);
}

int				ClapTrap::get_melle(void)
{
	return (this->_melle);
}

int				ClapTrap::get_ranged(void)
{
	return (this->_ranged);
}

int				ClapTrap::get_armor(void)
{
	return (this->_armor);
}

std::string		ClapTrap::get_name(void)
{
	return (this->_name);
}

void			ClapTrap::set_HP(int val)
{
	this->_HP = val;
}

void			ClapTrap::set_MAX_HP(int val)
{
	this->_MAX_HP = val;
}

void			ClapTrap::set_energy(int val)
{
	this->_energy = val;
}

void			ClapTrap::set_MAX_ENERGY(int val)
{
	this->_MAX_energy = val;
}

void			ClapTrap::set_level(int val)
{
	this->_lvl = val;
}

void			ClapTrap::set_melle(int val)
{
	this->_melle = val;
}

void			ClapTrap::set_ranged(int val)
{
	this->_ranged = val;
}

void			ClapTrap::set_armor(int val)
{
	this->_armor = val;
}

void			ClapTrap::set_name(std::string name)
{
	this->_name = name;
}
