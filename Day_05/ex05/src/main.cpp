
#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include "../includes/OfficeBlock.hpp"
#include "../includes/CentralBureaucracy.hpp"
#include <iostream>
#include <cstdlib>

int 	main(void)
{
	CentralBureaucracy buro;
	
	srand(time(NULL));

	std::string name_e[20];
	name_e[0] = "Andrew";
	name_e[1] = "Aaron";
	name_e[2] = "Anton";
	name_e[3] = "Bill";
	name_e[4] = "Bob";
	name_e[5] = "Burry";
	name_e[6] = "Buddy";
	name_e[7] = "Chad";
	name_e[8] = "Craig";
	name_e[9] = "Dan";
	std::string name_s[20];
	name_s[0] = "Don";
	name_s[1] = "Dag";
	name_s[2] = "Dirk";
	name_s[3] = "Drake";
	name_s[4] = "Kris";
	name_s[5] = "Sean";
	name_s[6] = "Rob";
	name_s[7] = "James";
	name_s[8] = "Lee";
	name_s[9] = "Matt";

	int i = -1;
	int j = -1;
	while (++i < 20 && ++j)
	{
		if (j == 9)
			j = 0;
		buro.feedExecutor(*new Bureaucrat(name_e[i], rand() % 150 + 1));
		buro.feedSigner(*new Bureaucrat(name_s[i], rand() % 150 + 1));
	}
	i = -1;
	while (++i < 39)
	{
		int k = rand() % 9;
		int l = rand() % 9;
		std::string target = name_s[k] + name_e[l];
		buro.queueUp(target);
	}
	buro.doBureaucracy();
}
