
#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
public:

	OfficeBlock				(void);
	OfficeBlock				(Intern &intern, Bureaucrat &sign,
	Bureaucrat &execute);
	~OfficeBlock			(void);

	void					setIntern(Intern &intern);
	void					setSigner(Bureaucrat &sign);
	void					setExecutor(Bureaucrat &execute);
	Intern					*getIntern();
	Bureaucrat				*getSign();
	Bureaucrat				*getExecute();
	void					doBureaucracy(std::string name, std::string target) const;
	class OfficeIsEmpty : public std::exception
	{
	public:
		OfficeIsEmpty (void);
		OfficeIsEmpty (OfficeIsEmpty const & inst);
		virtual	~OfficeIsEmpty() throw();
		OfficeIsEmpty & operator=(OfficeIsEmpty
		const & inst);
		virtual const char * what() const throw();
	};
	class OfficeIsNotFull : public std::exception
	{
	public:
		OfficeIsNotFull (void);
		OfficeIsNotFull (OfficeIsNotFull const & inst);
		virtual	~OfficeIsNotFull() throw();
		OfficeIsNotFull & operator=(OfficeIsNotFull
		const & inst);
		virtual const char * what() const throw();
	};
private:

	Intern					*_intern;
	Bureaucrat				*_sign;
	Bureaucrat				*_execute;
};

#endif
