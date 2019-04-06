
#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
public:

	Peon			(void);
	Peon			(Peon const & inst);
	Peon			(std::string name);
	~Peon			(void);

	void			getPolymorphed(void) const;
private:

};

#endif
