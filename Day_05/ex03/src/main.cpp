
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int 	main(void)
{
	Intern a;
	Intern b;
	Intern c;
	Intern d;

	Form *a1 = a.makeForm("Shrubbery", "Unit Factory");
	Form *a2 = b.makeForm("Presidential", "Bob");
	Form *a3 = c.makeForm("Robotomy", "Bill");
	Form *a4 = d.makeForm("Bla", "Bla");
	std::cout << std::endl << *a1 << std::endl;
	std::cout << *a2 << std::endl;
	std::cout << *a3 << std::endl;
	std::cout << a4 << std::endl;
	return 0;
}
