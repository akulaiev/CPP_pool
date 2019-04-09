
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
public:

	Form				(void);
	Form				(Form const & inst);
	Form				(std::string name, int gradeSign, int gradeExe);
	virtual ~Form		(void);

	Form &				operator=(Form const & inst);
	std::string			getName() const;
	bool				getSignatureStatus() const;
	bool				getExecutionStatus() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException (void);
		GradeTooHighException (GradeTooHighException const & inst);
		virtual	~GradeTooHighException() throw();
		GradeTooHighException & operator=(GradeTooHighException
		const & inst);
		virtual const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException	(void);
		GradeTooLowException	(GradeTooLowException const & inst);
		virtual ~GradeTooLowException() throw();
		GradeTooLowException & operator=(GradeTooLowException
		const & inst);
		virtual const char * what() const throw();
	};
	class FormNotSigned : public std::exception
	{
	public:
		FormNotSigned	(void);
		FormNotSigned	(FormNotSigned const & inst);
		virtual ~FormNotSigned() throw();
		FormNotSigned & operator=(FormNotSigned
		const & inst);
		virtual const char * what() const throw();
	};
	void					beSigned(Bureaucrat &bob);
	void					execute(Bureaucrat const & executor) const;
	virtual void			action(std::string target) const = 0;
private:

	std::string const		_name;
	bool					_signature_status;
	bool					_execution_status;
	int	const				_grade_sign;
	int	const				_grade_execute;
};

std::ostream &		operator<<(std::ostream & os,
Form & inst);

#endif
