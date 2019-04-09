
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
public:

	Intern				(void);
	Intern				(Intern const & inst);
	~Intern				(void);

	Intern &			operator=(Intern const & inst);
	Form				*makeForm(std::string name, std::string target) const;
private:

};

#endif
