
#include <string>
#include <iostream>
#include "./includes/Phonebook.class.hpp"

int		main(void)
{
	Phonebook		res;
	std::string		input;
	int				i;
	
	std::cout << "Please, type your PhoneBook command:" << std::endl;
	i = -1;
	while (std::cin >> input && input.compare("EXIT"))
	{
		if (!input.compare("ADD") && ++i <= 8)
			res.get_all_contacts(i);
		else if (!input.compare("SEARCH") && i >= 0 && i <= 7)
			res.search(i);
	}
	if (!input.compare("EXIT"))
		return (0);
}