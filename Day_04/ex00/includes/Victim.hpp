
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
public:

	Victim			(void);
	Victim			(Victim const & inst);
	Victim			(std::string name);
	~Victim			(void);
	std::string		get_name(void) const;
	void			set_name(std::string name);

	virtual void	getPolymorphed(void) const;
private:
	std::string		_name;
};

std::ostream &		operator<<(std::ostream & os,
Victim & inst);

#endif
