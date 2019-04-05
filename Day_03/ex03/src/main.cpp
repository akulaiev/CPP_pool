
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/NinjaTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include <iostream>

int 	main(void)
{
	std::string		target[5];

	target[0] = "Voldemort";
	target[1] = "Night King";
	target[2] = "Sauron";
	target[3] = "Lex Luthor";
	target[4] = "Thanos";

	ClapTrap parent;
	FragTrap new_game("FragTrap");
	ScavTrap game_two("ScavTrap");
	srand(time(NULL));
	NinjaTrap ninja("NinjaTrap");
	ninja.ninjaShoebox(new_game);
	ninja.ninjaShoebox(game_two);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(parent);
	return 0;
}
