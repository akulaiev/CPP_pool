
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/Form.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm
(void) : Form("RobotomyRequest", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm
(RobotomyRequestForm const & inst) : Form("RobotomyRequest", 72, 45)
{
	*this = inst;
}

RobotomyRequestForm::RobotomyRequestForm
(std::string name) : Form(name, 72, 45) {}

RobotomyRequestForm::~RobotomyRequestForm	(void) {}

void				RobotomyRequestForm::action(std::string target) const
{
	srand(time(NULL));
	bool check;
	check = rand() % 1;
	std::cout << "Drrrrrr... Drrrrrr... Rrrrrrrrrrrr..." << std::endl;
	if (check == true)
		std::cout << target << " has been robotomized successfully!" <<
		std::endl;
	else
		std::cout << target << " failed to be robotomized :(" <<
		std::endl;
}

std::ostream &		operator<<(std::ostream & os,
RobotomyRequestForm & inst)
{
	std::string status_signed;

	if (inst.getSignatureStatus() == true)
		status_signed = "signed";
	else
		status_signed = "not signed";
	return (os << inst.getName() + " form: a grade, needed to sign it is - "
	<< inst.getGradeSign() << ". A grade, needed to execute it is - "
	<< inst.getGradeExecute() << "." << std::endl) <<
	"Form's signature status is: " << status_signed << "." << std::endl;
}
