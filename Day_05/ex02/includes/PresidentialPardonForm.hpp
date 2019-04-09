
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm				(void);
	PresidentialPardonForm				(PresidentialPardonForm const & inst);
	PresidentialPardonForm				(std::string name);
	~PresidentialPardonForm				(void);

	void								action(std::string target) const;
private:

};

std::ostream &		operator<<(std::ostream & os,
PresidentialPardonForm & inst);

#endif
