
#include "../includes/FragTrap.hpp"
#include <iostream>

int 	main(void)
{
	std::string		target[13];

	target[0] = "Voldemort";
	target[1] = "Night King";
	target[2] = "Sauron";
	target[3] = "Lex Luthor";
	target[4] = "Thanos";
	target[5] = "Monday morning";

	FragTrap new_game("Claptrap");
	srand(time(NULL));
	int i = -1;
	while (++i <= 5)
		new_game.vaulthunter_dot_exe(target[i]);
	return 0;
}
