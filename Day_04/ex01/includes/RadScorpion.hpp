
#ifndef VILAGER_HPP
# define VILAGER_HPP

#include <iostream>
#include "Victim.hpp"

class Vilager : public Victim
{
public:

	Vilager			(void);
	Vilager			(Vilager const & inst);
	Vilager			(std::string name);
	~Vilager		(void);

	void			getPolymorphed(void) const;
private:

};

#endif
