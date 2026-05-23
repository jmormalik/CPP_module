#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private:
		AForm* _makeShrubbery(const std::string& target);
		AForm* _makeRobotomy(const std::string& target);
		AForm* _makePresidential(const std::string& target);
	public:
		Intern();
		~Intern();
		Intern(const Intern& obj);
		Intern& operator=(const Intern& obj);
		AForm* makeForm(const std::string& formName, const std::string& target);
};

#endif