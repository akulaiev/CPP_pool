
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include <iostream>

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/OfficeBlock.hpp"
#include <iostream>

int 	main(void)
{
	Intern      idiotOne;
	Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	OfficeBlock ob2;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);
	try
	{
		ob.doBureaucracy("mutant pig termination", "Pigley");
		ob.doBureaucracy("Shrubbery", "Unit Factory");
	}
	catch (OfficeBlock::OfficeIsEmpty::OfficeIsEmpty & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception & e) {
		return 0;
	}
	try
	{
		ob2.setSigner(hermes);
		ob2.setExecutor(bob);
		ob2.doBureaucracy("PresidentialPardonForm", "Pinky");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		ob2.setIntern(idiotOne);
		ob2.setSigner(hermes);
		ob2.setExecutor(bob);
		ob2.doBureaucracy("PresidentialPardonForm", "Pinky");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
