
#include "../includes/Intern.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern (Intern const & inst)
{
	*this = inst;
}

Intern::~Intern	(void) {}

Intern &		Intern::operator=(Intern const & inst)
{
	(void)inst;
	return *this;	
}

Form			*Intern::makeForm(std::string name,
std::string target) const
{
	Form *form_ptr = NULL;

	if (name == "PresidentialPardonForm" ||
	name == "Presidential")
		form_ptr = new PresidentialPardonForm(target);
	else if (name == "RobotomyRequestForm" ||
	name == "Robotomy")
		form_ptr = new RobotomyRequestForm(target);
	else if (name == "ShrubberyCreationForm" ||
	name == "Shrubbery")
		form_ptr = new ShrubberyCreationForm(target);
	else
	{
		std::cout << "Wrong form name!!!" << std::endl;
		return (form_ptr);
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form_ptr);
}
