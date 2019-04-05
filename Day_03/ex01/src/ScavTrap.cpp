
#include "../includes/ScavTrap.hpp"
#include <iostream>
#include <cmath>

ScavTrap::ScavTrap	(void)
{
	std::cout << "ScavTrap: Calling... THE DEFAULT CONSTRUCTOR.\n\
Thank you for your patience."
	<< std::endl;
}

ScavTrap::ScavTrap	(ScavTrap const & inst)
{
	std::cout << "ScavTrap: Calling... THE COPY CONSTRUCTOR\n\
Thank you for your patience." <<
	std::endl;
	*this = inst;
}

ScavTrap::ScavTrap	(std::string name)
{
	std::cout << std::endl << "ScavTrap: Calling...  THE PARAMETRIC CONSTRUCTOR.\n\
Thank you for your patience." <<
	std::endl << std::endl;

	this->_HP = 100;
	this->_MAX_HP = 100;
	this->_energy = 50;
	this->_MAX_energy = 50;
	this->_lvl = 1;
	this->_melle = 20;
	this->_ranged = 15;
	this->_armor = 3;
	this->_name = name;
}

ScavTrap::~ScavTrap	(void)
{
	std::cout << std::endl << "ScavTrap: Ooooops! It all has been \
DESTRUCTED!" << std::endl << std::endl;
}


void			ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Range challenge:  " << this->_name << target <<
	" causing " << this->_ranged << " points of damage!" <<
	std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Melee challenge: " << this->_name << target <<
	" causing " << this->_melle << " points of damage!" <<
	std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " is damaged with  " <<
	amount << " points of damage!" << std::endl;
	this->_HP = fmax(0, this->_HP - amount +
	this->_armor);
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " is repaided with  " <<
	amount << " health points!" << std::endl;
	this->_HP = fmin(this->_MAX_HP, this->_HP + amount);
}

void			ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		challenge[8];
	int				i;

	std::cout << this->_name << " is challenging " << target <<
	" to ";
	challenge[0] = " eat a cockroach!";
	challenge[1] = " pass the CPP pool!";
	challenge[2] = " do a naked mile!";
	challenge[3] = " watch all episodes of Santa Barbara!";
	challenge[4] = " have a dinner of broccoli and brussels sprouts!";
	challenge[5] = " listen all of Pavlo Zibrov's songs!";
	challenge[6] = " write code in Coplien’s form!";
	challenge[7] = " start jogging and really do that!";
	i = rand() % 8;
	std::cout << challenge[i] << std::endl;
}

int				ScavTrap::get_HP(void)
{
	return (this->_HP);
}

int				ScavTrap::get_MAX_HP(void)
{
	return (this->_MAX_HP);
}

int				ScavTrap::get_energy(void)
{
	return (this->_energy);
}

int				ScavTrap::get_MAX_ENERGY(void)
{
	return (this->_MAX_energy);
}

int				ScavTrap::get_level(void)
{
	return (this->_lvl);
}

int				ScavTrap::get_melle(void)
{
	return (this->_melle);
}

int				ScavTrap::get_ranged(void)
{
	return (this->_ranged);
}

int				ScavTrap::get_armor(void)
{
	return (this->_armor);
}

std::string		ScavTrap::get_name(void)
{
	return (this->_name);
}

void			ScavTrap::set_HP(int val)
{
	this->_HP = val;
}

void			ScavTrap::set_MAX_HP(int val)
{
	this->_MAX_HP = val;
}

void			ScavTrap::set_energy(int val)
{
	this->_energy = val;
}

void			ScavTrap::set_MAX_ENERGY(int val)
{
	this->_MAX_energy = val;
}

void			ScavTrap::set_level(int val)
{
	this->_lvl = val;
}

void			ScavTrap::set_melle(int val)
{
	this->_melle = val;
}

void			ScavTrap::set_ranged(int val)
{
	this->_ranged = val;
}

void			ScavTrap::set_armor(int val)
{
	this->_armor = val;
}

void			ScavTrap::set_name(std::string name)
{
	this->_name = name;
}
