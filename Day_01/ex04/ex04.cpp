
#include <string>
#include <iostream>

int			main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*brain_p = &brain;
	std::string		&brain_ref = brain;
	std::cout << "pointer: " << *brain_p << std::endl;
	std::cout << "reference: " << brain_ref << std::endl;
}
