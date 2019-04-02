
#include "./includes/Contact.class.hpp"
#include "./includes/Phonebook.class.hpp"
#include <string>
#include <iostream>

void Contact::add_contact_info(std::string data,
			std::string	field)
{
	if (!data.compare("EXIT"))
		std::exit(0);
	else if (!field.compare("first name"))
		this->first_name = data;
	else if (!field.compare("last name"))
		this->last_name = data;
	else if (!field.compare("nickname"))
		this->nickname = data;
	else if (!field.compare("login"))
		this->login = data;
	else if (!field.compare("postal address"))
		this->postal_address = data;
	else if (!field.compare("email address"))	
		this->email_address = data;
	else if (!field.compare("phone number"))	
		this->phone_number = data;
	else if (!field.compare("birthday date"))
		this->birthday_date = data;
	else if (!field.compare("favorite meal"))
		this->favorite_meal = data;
	else if (!field.compare("underwear color"))
		this->underwear_color = data;
	else if (!field.compare("darkest secret"))
		this->darkest_secret = data;
}
