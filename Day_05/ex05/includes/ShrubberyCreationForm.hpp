
#ifndef SHURBERRYCREATIONFORM_HPP
# define SHURBERRYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm				(void);
	ShrubberyCreationForm				(ShrubberyCreationForm const & inst);
	ShrubberyCreationForm				(std::string name);
	~ShrubberyCreationForm				(void);

	void								action(std::string target) const;
private:

};

std::ostream &		operator<<(std::ostream & os,
ShrubberyCreationForm & inst);

#endif
