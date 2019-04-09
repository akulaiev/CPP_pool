
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm				(void);
	RobotomyRequestForm				(RobotomyRequestForm const & inst);
	RobotomyRequestForm				(std::string name);
	~RobotomyRequestForm			(void);

	void							action(std::string target) const;
private:

};

std::ostream &		operator<<(std::ostream & os,
RobotomyRequestForm & inst);

#endif
