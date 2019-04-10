
#include "../includes/Intern.hpp"
#include "../includes/OfficeBlock.hpp"
#include "../includes/Form.hpp"
#include <iostream>

OfficeBlock::OfficeBlock			(void) : _intern(NULL), _sign(NULL),
_execute(NULL) {}

OfficeBlock::OfficeBlock			(Intern &intern, Bureaucrat &sign,
Bureaucrat &execute) : _intern(&intern), _sign(&sign), _execute(&execute) {}

OfficeBlock::~OfficeBlock			(void) {}

void					OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void					OfficeBlock::setSigner(Bureaucrat &sign)
{
	_sign = &sign;
}

void					OfficeBlock::setExecutor(Bureaucrat &execute)
{
	_execute = &execute;
}

Intern					*OfficeBlock::getIntern()
{
	return (_intern);
}

Bureaucrat				*OfficeBlock::getSign()
{
	return (_sign);
}

Bureaucrat				*OfficeBlock::getExecute()
{
	return (_execute);
}

void					OfficeBlock::doBureaucracy(std::string name,
std::string target) const
{
	if (_intern == NULL && _sign == NULL && _execute == NULL)
		throw(OfficeIsEmpty());
	else if ((_intern == NULL && _sign && _execute) ||
	(_intern && _sign == NULL && _execute) ||
	(_intern && _sign && _execute == NULL))
		throw(OfficeIsNotFull());
	else
	{
		Form *a = _intern->makeForm(name, target);
		if (!a)
		{
			delete a;
			std::cout << "Intern couldn't create a requested form!" << std::endl;
			return ;
		}
		try
		{
			_sign->signForm(*a);
			_execute->executeForm(*a);
		}
		catch (const std::exception& e)
		{
			delete a;
			std::cerr << e.what() << std::endl;
		}
	}
}

//exeption 0
OfficeBlock::OfficeIsEmpty::OfficeIsEmpty (void) {return ;}

OfficeBlock::OfficeIsEmpty::OfficeIsEmpty (OfficeIsEmpty const & inst)
{
	*this = inst;
}

OfficeBlock::OfficeIsEmpty::~OfficeIsEmpty() throw() {return ;}

OfficeBlock::OfficeIsEmpty & OfficeBlock::OfficeIsEmpty::operator=(OfficeIsEmpty
const & inst)
{
	(void)inst;
	return *this;
}

const char * OfficeBlock::OfficeIsEmpty::what() const throw()
{
	return ("This office is empty!!!");
}

// exeption 1
OfficeBlock::OfficeIsNotFull::OfficeIsNotFull (void) {return ;}

OfficeBlock::OfficeIsNotFull::OfficeIsNotFull (OfficeIsNotFull const & inst)
{
	*this = inst;
}

OfficeBlock::OfficeIsNotFull::~OfficeIsNotFull() throw() {return ;}

OfficeBlock::OfficeIsNotFull & OfficeBlock::OfficeIsNotFull::operator=(OfficeIsNotFull
const & inst)
{
	(void)inst;
	return *this;
}

const char * OfficeBlock::OfficeIsNotFull::what() const throw()
{
	return ("This office is not fully staffed!!!");
}
