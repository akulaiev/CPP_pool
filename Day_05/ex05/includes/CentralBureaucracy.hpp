
#ifndef CENTRALBUREAUCRACY_HPP
# define CENTRALBUREAUCRACY_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"

class CentralBureaucracy
{
public:

	CentralBureaucracy			(void);
	CentralBureaucracy			(CentralBureaucracy &inst);
	~CentralBureaucracy			(void);

	CentralBureaucracy &		operator=(CentralBureaucracy & inst);
	void						feedSigner(Bureaucrat sign);
	void						feedExecutor(Bureaucrat exec);
	void						queueUp(std::string	target);
	void						doBureaucracy();
private:

	OfficeBlock					_offices[20];
	std::string					_targets[39];
};

#endif
