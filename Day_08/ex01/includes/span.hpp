
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
public:

	Span				(void);
	Span				(Span const & inst);
	Span				(unsigned int N);
	~Span				(void);

	Span &				operator=(Span const & inst);
	void				addNumber(int number);
	unsigned int		shortestSpan();
	unsigned int		longestSpan();
	std::vector<int>	getVec();

	class NotEnoughObj : public std::exception
	{
	public:
		NotEnoughObj (void);
		NotEnoughObj (NotEnoughObj const & inst);
		virtual	~NotEnoughObj() throw();
		NotEnoughObj & operator=(NotEnoughObj
		const & inst);
		virtual const char * what() const throw();
	};
	class TooManyObj : public std::exception
	{
	public:
		TooManyObj	(void);
		TooManyObj	(TooManyObj const & inst);
		virtual ~TooManyObj() throw();
		TooManyObj & operator=(TooManyObj
		const & inst);
		virtual const char * what() const throw();
	};
private:

	std::vector<int>		_vec;
	unsigned int			_num;
};

std::ostream &		operator<<(std::ostream & os,
Span & inst);

#endif
