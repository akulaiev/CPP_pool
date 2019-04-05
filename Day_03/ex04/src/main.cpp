
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/NinjaTrap.hpp"
#include "../includes/ClapTrap.hpp"
#include "../includes/SuperTrap.hpp"
#include <iostream>

int 	main(void)
{
	std::string		target[5];

	target[0] = "Voldemort";
	target[1] = "Night King";
	target[2] = "Sauron";
	target[3] = "Lex Luthor";
	target[4] = "Thanos";
	SuperTrap st("SuperTrap");
	srand(time(NULL));
	int i = -1;
	while (++i <= 4)
		st.vaulthunter_dot_exe(target[i]);
	st.takeDamage(15);
	st.beRepaired(10);
	NinjaTrap ninja("SuperTrap");
	st.ninjaShoebox(ninja);
	st.beRepaired(10);
	return 0;
}
