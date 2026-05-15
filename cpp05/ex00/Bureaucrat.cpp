#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :_name("DefaultName"){}

Bureaucrat::Bureaucrat(int grade, const std::string name) :_name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) { this->_grade = obj._grade; }

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj)
{
	if (this != &obj)
	{
		this->_grade = obj._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High..";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low..";
}

std::ostream & operator<<(std::ostream & cout, const Bureaucrat obj)
{
	cout << obj.getGrade();
	return (cout);
}
