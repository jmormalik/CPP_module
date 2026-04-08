#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact contacts[8];
	int	cur;
	static bool get_msg(const std::string, std::string&);
	static std::string print_phonebook(std::string str);
public:
	PhoneBook();
	~PhoneBook();
	bool Add();
	bool Search();
};

#endif