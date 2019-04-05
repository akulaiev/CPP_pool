
#include "../includes/ScavTrap.hpp"
#include <iostream>
#include <cmath>

ScavTrap::ScavTrap	(void)
{
	std::cout << "ScavTrap is calling... T\
HE DEFAULT CONSTRUCTOR.\n\
Thank you for your patience."
	<< std::endl;
}

ScavTrap::ScavTrap	(ScavTrap const & inst)
{
	std::cout << "ScavTrap is calling... \
THE COPY CONSTRUCTOR\n\
Thank you for your patience." <<
	std::endl;
	*this = inst;
}

ScavTrap::ScavTrap	(std::string name)
{
	std::cout << std::endl << "ScavTrap is calling...  \
THE PARAMETRIC CONSTRUCTOR.\n\
Thank you for your patience." <<
	std::endl << std::endl;

	this->_energy = 50;
	this->_MAX_energy = 50;
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
