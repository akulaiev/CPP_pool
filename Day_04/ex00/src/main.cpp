
#include "../includes/Sorcerer.hpp"
#include "../includes/Victim.hpp"
#include "../includes/Peon.hpp"
#include "../includes/Vilager.hpp"
#include <iostream>

int 	main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Vilager jack("Jack");
	std::cout << robert << jim << joe << jack;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jack);
	return 0;
}
