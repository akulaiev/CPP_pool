
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
public:

	Brain		(void);
	std::string	identify(void) const;
private:

	const void	*_addr;
};

#endif
