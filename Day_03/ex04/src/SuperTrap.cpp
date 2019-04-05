
#include "../includes/NinjaTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/SuperTrap.hpp"
#include <iostream>
#include <cmath>

SuperTrap::SuperTrap	(void)
{
	std::cout << "SuperTrap is calling... \
THE DEFAULT CONSTRUCTOR.\n\
Thank you for your patience."
	<< std::endl;
}

SuperTrap::SuperTrap	(SuperTrap const & inst)
{
	std::cout << "SuperTrap is calling... \
THE COPY CONSTRUCTOR\n\
Thank you for your patience." <<
	std::endl;
	*this = inst;
}

SuperTrap::SuperTrap	(std::string name)
{
	std::cout << std::endl << "SuperTrap is calling...  \
THE PARAMETRIC CONSTRUCTOR.\n\
Thank you for your patience." << std::endl << std::endl;
	this->_HP = 100;
	this->_MAX_HP = 100;
	this->_energy = 120;
	this->_MAX_energy = 120;
	this->_melle = 60;
	this->_ranged = 20;
	this->_armor = 5;
	this->_name = name;
}

SuperTrap::~SuperTrap	(void)
{
	std::cout << std::endl << "SuperTrap: Ooooops! It all has been \
DESTRUCTED!" << std::endl << std::endl;
}
