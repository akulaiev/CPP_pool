
#include "../includes/span.hpp"
#include <iostream>

int 	main(void)
{
	Span sp(5);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(Span::TooManyObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		sp.longestSpan();
	}
	catch(Span::NotEnoughObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

	srand(time(NULL));
	Span sp1(100000);
	int i = -1;
	try
	{
		while (++i < 100000)
			sp1.addNumber(rand() % 11113 + (-475));
	}
	catch(Span::TooManyObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;
	}
	catch(Span::NotEnoughObj & e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp2(3);
	i = -1;
	try
	{
		while (++i < 5)
			sp2.addNumber(rand() % 1000 + (-1000));
	}
	catch(Span::TooManyObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
	}
	catch(Span::NotEnoughObj & e)
	{
		std::cerr << e.what() << '\n';
	}

	Span sp3(1);
	i = -1;
	try
	{
		sp3.addNumber(13);
	}
	catch(Span::TooManyObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
		std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
	}
	catch(Span::NotEnoughObj & e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
