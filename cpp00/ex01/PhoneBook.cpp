#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : cur(0) {}

PhoneBook::~PhoneBook()
{
}

bool PhoneBook::get_msg(const std::string msg, std::string &str)
{

	while (1)
	{
		std::cout << msg;
		if (!std::getline(std::cin, str))
			break ;
		if (str.empty())
			continue ;
		return true ;
	}
	return false;
}

std::string PhoneBook::print_phonebook(std::string str)
{
	return str.length() > 10 ? str.substr(0, 9) + '.' : str;
}

bool PhoneBook::Add()
{
	std::string str;
	Contact new_contact;
	
	if (!get_msg("First Name: ", str))
		return false;
	new_contact.set_first_name(str);
	if (!get_msg("Last Name: ", str))
		return false;
	new_contact.set_last_name(str);
	if (!get_msg("Nick Name: ", str))
		return false;
	new_contact.set_nickname(str);
	if (!get_msg("Phone Number: ", str))
		return false;
	new_contact.set_phone_number(str);
	if (!get_msg("Darkest Secret: ", str))
		return false;
	new_contact.set_darkest_secret(str);
	this->contacts[this->cur % 8] = new_contact;
	this->cur++;
	return true;
}


bool PhoneBook::Search()
{
	if (!this->cur)
	{
		std::cout << "data not found!" << std::endl;
		return true;
	}
	std::cout << std::setw(10) << "Index" << "|" 
		<< std::setw(10) << "First Name" << "|" 
		<< std::setw(10) << "Last Name" << "|" 
		<< std::setw(10) << "Nick Name" << std::endl;
	int count = (this->cur > 8) ? 8 : this->cur;
	for(int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << '|'
			<< std::setw(10) << print_phonebook(this->contacts[i].get_first_name()) << '|'
			<< std::setw(10) << print_phonebook(this->contacts[i].get_last_name()) << '|'
			<< std::setw(10) << print_phonebook(this->contacts[i].get_nickname()) << '|' << std::endl;
	}
	std::string str;
	int		index;
	while (1)
	{
		std::cout << "Choose Book index: ";
		if (!std::getline(std::cin, str))
			return false;
		std::stringstream ss(str);
		if (!(ss >> index)) {
			index = -1;
		}
		if (index < count && index >= 0)
			break ;
	}
	std::cout << this->contacts[index].get_first_name() << std::endl;
	std::cout << this->contacts[index].get_last_name() << std::endl;
	std::cout << this->contacts[index].get_nickname() << std::endl;
	std::cout << this->contacts[index].get_phone_number() << std::endl;
	std::cout << this->contacts[index].get_darkest_secret() << std::endl;
	return true;
}
