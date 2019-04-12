
#include "../includes/easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int 	main(void)
{
	std::list<int> lst;
	std::list<int> lst1;
	std::vector<int> vec(16);

	lst.push_back(7);
	lst.push_back(0);
	lst.push_back(13);
	lst.push_back(10);
	lst.push_back(13);
	lst.push_back(13);
	lst.push_back(173);
	lst.push_back(-1);
	std::cout << "Trying to find value '13' in the list. Right place: 2!" << std::endl;
	try
	{
		std::cout << "Ret val: " << easyfind(lst, 13) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Trying to find value '13' in the list. (It's not there)" << std::endl;
	lst1.push_back(7);
	lst1.push_back(173);
	lst1.push_back(-1);
	try
	{
		std::cout << "Ret val: " << easyfind(lst1, 13) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Trying to find value '13' in the vector. Right place: 13!" << std::endl;
	int i = -1;
	while (++i < 15)
		vec[i] = i;
	try
	{
		std::cout << "Ret val: " << easyfind(vec, 13) << std::endl;
	}
	catch(NoValue & e)
	{
		std::cerr << "Ret val: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
