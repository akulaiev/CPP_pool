
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int 	main(void)
{
	std::string		target[5];

	target[0] = "Voldemort";
	target[1] = "Night King";
	target[2] = "Sauron";
	target[3] = "Lex Luthor";
	target[4] = "Thanos";

	FragTrap new_game("FragTrap");
	srand(time(NULL));
	int i = -1;
	while (++i <= 4)
		new_game.vaulthunter_dot_exe(target[i]);
	ScavTrap game_two("ScavTrap");
	i = -1;
	while (++i <= 4)
		game_two.challengeNewcomer(target[i]);
	return 0;
}
