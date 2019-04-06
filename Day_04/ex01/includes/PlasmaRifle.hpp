
#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:

	Sorcerer			(void);
	Sorcerer			(Sorcerer const & inst);
	Sorcerer			(std::string name, std::string title);
	~Sorcerer			(void);	
	std::string			get_name(void);
	std::string			get_title(void);
	void				set_name(std::string name);
	void				set_title(std::string name);

	void				polymorph(Victim const &) const;
private:
	std::string			_name;
	std::string			_title;
};

std::ostream &		operator<<(std::ostream & os,
Sorcerer & inst);

#endif
