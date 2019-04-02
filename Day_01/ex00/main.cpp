
#include "./includes/Pony.hpp"
#include <string>
#include <iostream>

void	ponyOnTheHeap(std::string name)
{
	Pony	*new_pony = new Pony(name);

	std::cout << "Created dynamic " << new_pony->name << " on heap ;)" << std::endl;
	delete new_pony;
}

void	ponyOnTheStack(std::string name)
{
	Pony	new_pony;

	new_pony = Pony(name);
	std::cout << "Created static " << new_pony.name << " on stack ;)" << std::endl;
}

int		main(void)
{
	ponyOnTheStack("Pinky Pie");
	ponyOnTheHeap("Apple Jack");
	// system("leaks MLP | grep -iE \"leak\"");
}