
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int 	main(void)
{
	try
	{
		Bureaucrat a("Bureaucrat Bob", 1);
		Bureaucrat b("Bureaucrat Bill", 150);
		std::cout << a;
		std::cout << b;
		Form F1("#1", 100, 50);
		Form F2("#2", 10, 1);
		a.signForm(F1);
		a.signForm(F2);
		std::cout << F1;
		std::cout << F2;
		Form F3("#3", 10, 1);
		b.signForm(F3);
		std::cout << F3;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
