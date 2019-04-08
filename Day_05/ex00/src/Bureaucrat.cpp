
#include "../includes/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat	(void) {}

Bureaucrat::Bureaucrat	(Bureaucrat const & inst)
{
	*this = inst;
}

Bureaucrat::Bureaucrat	(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::~Bureaucrat	(void) {}

void				Bureaucrat::grade_increment(void)
{
	if (_grade++ > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++_grade;
}

void				Bureaucrat::grade_decrement(void)
{
	if (_grade-- > 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--_grade;
}

std::string			Bureaucrat::getName() const
{
	return (_name);
}

int					Bureaucrat::getGrade() const
{
	return (_grade);
}

Bureaucrat::GradeTooHighException::GradeTooHighException (void)
{
	return ;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException
const & inst)
{
	*this = inst;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	return ;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat's grade is too high!");
}

Bureaucrat::GradeTooHighException &	
Bureaucrat::GradeTooHighException::operator=(GradeTooHighException
const & inst)
{
	(void)inst;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (void)
{
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException (GradeTooLowException
const & inst)
{
	*this = inst;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	return ;
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat's grade is too low!");
}

Bureaucrat::GradeTooLowException &	
Bureaucrat::GradeTooLowException::operator=(GradeTooLowException
const & inst)
{
	(void)inst;
	return *this;	
}


Bureaucrat &				Bureaucrat::operator=(Bureaucrat const & inst)
{
	this->_grade = inst._grade;
	return (*this);
}

std::ostream &		operator<<(std::ostream & os,
Bureaucrat & inst)
{
	return (os << inst.getName() + ", bureaucrat's grade " << inst.getGrade() <<
	"." << std::endl);
}
