#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_first_name(std::string str)
{
	First_name = str;
}

void Contact::set_last_name(std::string str)
{
	Last_name = str;
}

void Contact::set_nickname(std::string str)
{
	Nickname = str;
}

void Contact::set_phone_number(std::string str)
{
	Phone_number = str;
}

void Contact::set_darkest_secret(std::string str)
{
	Darkest_secret = str;
}

std::string Contact::get_first_name() const
{
	return First_name;
}

std::string Contact::get_last_name() const
{
	return Last_name;
}

std::string Contact::get_nickname() const
{
	return Nickname;
}

std::string Contact::get_phone_number() const
{
	return Phone_number;
}

std::string Contact::get_darkest_secret() const
{
	return Darkest_secret;
}

