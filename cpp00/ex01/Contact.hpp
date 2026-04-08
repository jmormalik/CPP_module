#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include <sstream>
#include <iostream>

class Contact
{
private:
	std::string First_name;
	std::string Last_name;
	std::string Nickname;
	std::string Phone_number;
	std::string Darkest_secret;
public:
	Contact(/* args */);
	~Contact();

	void set_first_name(std::string str);
	void set_last_name(std::string str);
	void set_nickname(std::string str);
	void set_phone_number(std::string str);
	void set_darkest_secret(std::string str);

	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
};

#endif