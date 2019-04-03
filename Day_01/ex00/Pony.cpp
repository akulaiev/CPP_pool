
#include "./includes/Pony.hpp"
#include <string>
#include <iostream>
#include <new>

Pony::Pony		(void) : name("my little"), type("pony") {}

Pony::Pony		(std::string name)
{
	this->name = name;
	if (name == "Rainbow Dash")
		this->type = "pegasus";
	if (name == "Rarity")
		this->type = "unicorn";
	if (name == "Fluttershy")
		this->type = "pegasus";
	if (name == "Pinkie Pie")
		this->type = "ground pony";
	if (name == "Applejack")
		this->type = "ground pony";
	std::cout << "It appears you've created " << name <<
	" instance in constructor!"
	<< std::endl;
}
