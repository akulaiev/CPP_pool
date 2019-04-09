
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

int 	main(void)
{
	try
	{
		Bureaucrat a("Bureaucrat Bob", 1);
		Bureaucrat b("Bureaucrat Bill", 150);
		std::cout << a;
		std::cout << b;
		ShrubberyCreationForm F1("Shrubbery");
		RobotomyRequestForm F2("Robotomy");
		PresidentialPardonForm F3("Presidential");
		a.signForm(F1);
		a.signForm(F2);
		a.executeForm(F1);
		b.executeForm(F3);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
