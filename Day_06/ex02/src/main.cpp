
#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <iostream>
#include <cstdlib>

Base *	generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	Base *base[3] = {new A(), new B(), new C()};
	return (base[i]);
}

void	identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object is of type C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Object is of type A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "Object is of type B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "Object is of type C" << std::endl;
}

int 	main(void)
{
	std::cout << "Generating random instanse of A B or C class..." << std::endl;
	Base	*base = generate();
	std::cout << "Passing a pointer to identify the class" << std::endl;
	identify_from_pointer(base);
	std::cout << "Passing a reference to identify the class" << std::endl;
	identify_from_reference(*base);
	delete base;
	return (0);
}
