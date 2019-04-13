
#include "../includes/span.hpp"
#include <iostream>
#include <algorithm>

Span::Span	(void) {}

Span::Span	(Span const & inst)
{
	*this = inst;
}

Span::Span	(unsigned int N) : _num(N)
{
	this->_vec.reserve(_num);
}

Span &				Span::operator=(Span const & inst)
{
	this->_vec = inst._vec;
	this->_num = inst._num;
	return (*this);
}

Span::~Span	(void) {}

void				Span::addNumber(int number)
{
	if (this->_vec.size() < this->_num)
		this->_vec.push_back(number);
	else
		throw TooManyObj();
}

unsigned int		Span::longestSpan()
{
	if (this->_vec.size() > 1)
	{
		sort(this->_vec.begin(), this->_vec.end());
		int res = *(this->_vec.end() - 1) - *this->_vec.begin();
		return (res);
	}
	else
		throw NotEnoughObj();
}

unsigned int		Span::shortestSpan()
{
	int tmp;
	int res;

	if (this->_vec.size() > 1)
	{
		res = longestSpan();
		for (std::vector<int>::const_iterator i = _vec.begin(); i != _vec.end() - 1; ++i)
		{
			tmp = *(i + 1) - *i;
			if (tmp < res)
				res = tmp;
		}
		return (res);
	}
	else
		throw NotEnoughObj();
}

std::vector<int>	Span::getVec()
{
	return (this->_vec);
}

// exceptions
Span::NotEnoughObj::NotEnoughObj (void) {}

Span::NotEnoughObj::NotEnoughObj (Span::NotEnoughObj const & inst)
{
	*this = inst;
}

Span::NotEnoughObj::~NotEnoughObj() throw() {}

Span::NotEnoughObj &
Span::NotEnoughObj::operator=(Span::NotEnoughObj const & inst)
{
	static_cast <void>(inst);
	return *this;
}

const char * Span::NotEnoughObj::what() const throw()
{
	return ("It's not enough elements in the vector!");
}

Span::TooManyObj::TooManyObj	(void) {}

Span::TooManyObj::TooManyObj	(Span::TooManyObj const & inst)
{
	*this = inst;	
}
Span::TooManyObj::~TooManyObj() throw() {}

Span::TooManyObj &
Span::TooManyObj::operator=(Span::TooManyObj const & inst)
{
	static_cast <void>(inst);
	return *this;
}

const char * Span::TooManyObj::what() const throw()
{
	return ("The vector has reached it's maximum capacity!");
}

std::ostream &		operator<<(std::ostream & os,
Span & inst)
{
	for (std::vector<int>::const_iterator i = inst.getVec().begin();
	i != inst.getVec().end(); ++i)
		os << *i << ' ';
	return os;
}
