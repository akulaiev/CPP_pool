
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm
(void) : Form("PresidentialPardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm
(PresidentialPardonForm const & inst) : 
Form("PresidentialPardon", 25, 5)
{
	*this = inst;
}

PresidentialPardonForm::PresidentialPardonForm
(std::string name) : Form(name, 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm	(void) {}

void				PresidentialPardonForm::action(std::string target) const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox."
	<< std::endl;
}

std::ostream &		operator<<(std::ostream & os,
PresidentialPardonForm& inst)
{
	std::string status_signed;
	std::string status_executed;

	if (inst.getSignatureStatus() == true)
		status_signed = "signed";
	else
		status_signed = "not signed";
	if (inst.getExecutionStatus() == true)
		status_executed = "executed";
	else
		status_executed = "not executed";
	return (os << inst.getName() + " form: a grade, needed to sign it is - "
	<< inst.getGradeSign() << ". A grade, needed to execute it is - "
	<< inst.getGradeExecute() << "." << std::endl) <<
	"Form's signature status is: " << status_signed << "." << std::endl <<
	"Form's execution status is: " << status_executed << "." << std::endl;
}
