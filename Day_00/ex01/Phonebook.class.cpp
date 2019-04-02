
#include "./includes/Phonebook.class.hpp"
#include <string>
#include <iostream>
#include <iomanip>

void Phonebook::get_all_contacts(int user_num)
{
	if (user_num == 8)
		Phonebook::exit(1);
	this->user_data[user_num] = Phonebook::add_user_info();
}

Contact		Phonebook::add_user_info(void) 
{
	std::string		input;
	Contact			new_contact;

	std::cout << "1. Please, enter your first name" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "first name");
	std::cout << "2. Please, enter your last name" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "last name");
	std::cout << "3. Please, enter your nickname" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "nickname");
	std::cout << "4. Please, enter your login" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "login");
	std::cout << "5. Please, enter your postal address" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "postal address");
	std::cout << "6. Please, enter your email address" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "email address");
	std::cout << "7. Please, enter your phone number" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "phone number");
	std::cout << "8. Please, enter your birthday date" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "birthday date");
	std::cout << "9. Please, enter your favorite meal" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "favorite meal");
	std::cout << "10. Please, enter your underwear color" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "underwear color");
	std::cout << "11. Please, enter your darkest secret" << std::endl;
	std::cin >> input;
	new_contact.add_contact_info(input, "darkest secret");
	return (new_contact);
}

void Phonebook::search(int user_num)
{
	int		i;
	int		input;

	i = -1;
	while (++i <= user_num)
	{
		if (this->user_data[i].first_name.size() > 10)
		{
			this->user_data[i].first_name.resize(10);
			this->user_data[i].first_name[9] = '.';
		}
		if (this->user_data[i].last_name.size() > 10)
		{
			this->user_data[i].last_name.resize(10);
			this->user_data[i].last_name[9] = '.';
		}
		if (this->user_data[i].nickname.size() > 10)
		{
			this->user_data[i].nickname.resize(10);
			this->user_data[i].nickname[9] = '.';
		}
		std::cout << 
		std::setw(10) << std::right << i << "|" << std::setw(10) << std::right
		<< this->user_data[i].first_name << "|" << std::setw(10) << std::right
		<< this->user_data[i].last_name << "|" << std::setw(10) << std::right
		<< this->user_data[i].nickname << std::endl;
	}
	std::cout << "Please, enter the number of the field to display." << std::endl;
	std::cout << "range: 0 - " << user_num << std::endl;
	std::cin >> input;
	if (input < 0 || input > user_num)
		Phonebook::exit(2);
	else
	{
		std::cout << this->user_data[input].first_name << std::endl;
		std::cout << this->user_data[input].last_name << std::endl;
		std::cout << this->user_data[input].nickname << std::endl;
		std::cout << this->user_data[input].login << std::endl;
		std::cout << this->user_data[input].postal_address << std::endl;
		std::cout << this->user_data[input].email_address << std::endl;
		std::cout << this->user_data[input].phone_number << std::endl;
		std::cout << this->user_data[input].birthday_date << std::endl;
		std::cout << this->user_data[input].favorite_meal << std::endl;
		std::cout << this->user_data[input].underwear_color << std::endl;
		std::cout << this->user_data[input].darkest_secret << std::endl;
	}
	
}

int		Phonebook::exit(int exit_code) const
{
	if (exit_code == 1)
		std::cout << "I'm sorry, but My Awesome Phonebook \
can not store more than 8 contacts :(" << std::endl;
	if (exit_code == 2)
		std::cout << "Sorry, there's no contact with this index :(" << std::endl;
	std::exit(exit_code);
}
