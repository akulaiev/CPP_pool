
#include "../includes/Form.hpp"
#include <iostream>

Form::Form	(void) : _name("F1"),
_grade_sign(100), _grade_execute(130) {}

Form::Form	(Form const & inst) : _name("F1"),
_grade_sign(100), _grade_execute(130)
{
	*this = inst;
}

Form::Form	(std::string name, int gradeSign, int gradeExe) : _name(name),
_grade_sign(gradeSign), _grade_execute(gradeExe)
{
	if (gradeSign > 150)
		throw (GradeTooLowException());
	else if (gradeSign < 1)
		throw (GradeTooHighException());
	if (gradeExe > 150)
		throw (GradeTooLowException());
	else if (gradeExe < 1)
		throw (GradeTooHighException());
}

Form::~Form	(void) {}

std::string			Form::getName() const
{
	return (_name);
}

bool				Form::getSignatureStatus() const
{
	return (_signature_status);
}

bool				Form::getExecutionStatus() const
{
	return (_execution_status);
}

int 				Form::getGradeSign() const
{
	return (_grade_sign);
}

int					Form::getGradeExecute() const
{
	return (_grade_execute);
}

void					Form::beSigned(Bureaucrat &bob)
{
	if (bob.getGrade() > _grade_sign)
		throw (GradeTooHighException());
	else
		_signature_status = true;
}

Form::GradeTooHighException::GradeTooHighException (void)
{
	return ;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException
const & inst)
{
	*this = inst;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Form's grade is too high!");
}

Form::GradeTooHighException &	
Form::GradeTooHighException::operator=(GradeTooHighException
const & inst)
{
	(void)inst;
	return *this;
}

Form::GradeTooLowException::GradeTooLowException (void)
{
	return ;
}

Form::GradeTooLowException::GradeTooLowException (GradeTooLowException
const & inst)
{
	*this = inst;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Form's grade is too low!");
}

Form::GradeTooLowException &	
Form::GradeTooLowException::operator=(GradeTooLowException
const & inst)
{
	(void)inst;
	return *this;	
}


Form &				Form::operator=(Form const & inst)
{
	_signature_status = inst._signature_status;
	return (*this);
}

std::ostream &		operator<<(std::ostream & os,
Form & inst)
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
	return (os << inst.getName() + " form: a grade, needed to sign it is - " << inst.getGradeSign()
	<< ". A grade, needed to execute it is - " << inst.getGradeExecute() << "." << std::endl) <<
	"Form's signature status is: " << status_signed << "." << std::endl <<
	"Form's execution status is: " << status_executed << "." << std::endl;
}
