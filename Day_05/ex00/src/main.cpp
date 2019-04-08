
#include "../includes/Bureaucrat.hpp"
#include <iostream>

int 	main(void)
{
	try
	{
		Bureaucrat a("First", 1);
		Bureaucrat b("Second", 150);
		std::cout << a;
		std::cout << b;
		a.grade_increment();
		b.grade_decrement();
		std::cout << a;
		std::cout << b;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
