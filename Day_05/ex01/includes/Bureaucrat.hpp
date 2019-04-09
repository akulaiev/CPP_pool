
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
public:

	Bureaucrat			(void);
	Bureaucrat			(Bureaucrat const & inst);
	Bureaucrat			(std::string name, int dgrade);
	~Bureaucrat			(void);

	Bureaucrat &		operator=(Bureaucrat const & inst);
	std::string			getName() const;
	int					getGrade() const;
	void				grade_increment(void);
	void				grade_decrement(void);
	void				signForm(Form &form);
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
private:

	std::string const	_name;
	int					_grade;
};

std::ostream &		operator<<(std::ostream & os,
Bureaucrat & inst);

#endif
