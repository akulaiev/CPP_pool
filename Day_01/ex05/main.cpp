
#include "./includes/Brain.hpp"
#include "./includes/Human.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	Human		bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
