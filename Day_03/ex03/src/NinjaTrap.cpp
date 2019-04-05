
#include "../includes/NinjaTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>
#include <cmath>

NinjaTrap::NinjaTrap	(void)
{
	std::cout << "NinjaTrap is calling... \
THE DEFAULT CONSTRUCTOR.\n\
Thank you for your patience."
	<< std::endl;
}

NinjaTrap::NinjaTrap	(NinjaTrap const & inst)
{
	std::cout << "NinjaTrap is calling... \
THE COPY CONSTRUCTOR\n\
Thank you for your patience." <<
	std::endl;
	*this = inst;
}

NinjaTrap::NinjaTrap	(std::string name)
{
	std::cout << std::endl << "NinjaTrap is calling...  \
THE PARAMETRIC CONSTRUCTOR.\n\
Thank you for your patience." <<
	std::endl << std::endl;
	this->_HP = 60;
	this->_MAX_HP = 60;
	this->_energy = 120;
	this->_MAX_energy = 120;
	this->_melle = 60;
	this->_ranged = 5;
	this->_armor = 0;
	this->_name = name;
}

NinjaTrap::~NinjaTrap	(void)
{
	std::cout << std::endl << "NinjaTrap: Ooooops! It all has been \
DESTRUCTED!" << std::endl << std::endl;
}

void				NinjaTrap::ninjaShoebox(FragTrap & frag)
{
	std::cout << "Ninja decided to fight his target." << std::endl;
	frag.vaulthunter_dot_exe("Target");
	std::cout << std::endl;
}

void				NinjaTrap::ninjaShoebox(ScavTrap & scav)
{
	std::cout << "Ninja decided to challenge his target." << std::endl;
	scav.challengeNewcomer("Target");
	std::cout << std::endl;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap & ninja)
{
	ninja.rangedAttack("Target");
	ninja.takeDamage(25);
	ninja.meleeAttack("Target");
	ninja.beRepaired(30);
	ninja.set_level(5);
	std::cout << "Woo-hoo!!! Ninja's level is up!!!" << std::endl;
	std::cout << std::endl;
}

void				NinjaTrap::ninjaShoebox(ClapTrap)
{
	std::cout << "Ninja's stats are: " << std::endl;
	std::cout << "HP: " << this->get_HP() << std::endl;
	std::cout << "Energy: " << this->get_energy() << std::endl;
	std::cout << "Level: " << this->get_level() << std::endl;
	std::cout << std::endl;
}
