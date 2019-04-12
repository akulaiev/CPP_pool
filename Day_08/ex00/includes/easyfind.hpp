
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class NoValue : public std::exception
{
public:
	NoValue (void) {}
	NoValue (NoValue const & inst) { *this = inst; }
	virtual	~NoValue() throw() {};
	NoValue & operator=(NoValue const & inst)
	{
		(void)inst;
		return *this;
	}
	virtual const char * what() const throw()
	{
		return ("Couldn't find the requested value!");
	}
};

template <typename T>
int		easyfind(T &container, int val)
{
	typename T::const_iterator	it = container.begin();
	typename T::const_iterator	end = container.end();
	int i = 0;

	while(it != end)
	{
		if (*it == val)
			return (i);
		i++;
		it++;
	}
	throw NoValue();
	return (0);
}

#endif
