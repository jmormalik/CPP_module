#include "Form.hpp"

Form::Form()
	:_name("default_name"), 
	_signed(false),
	_grade_required_to_sign(0), 
	_grade_required_to_execute(0)
	{}

Form::~Form() {}

Form::Form(const std::string name, const int grade_required_to_sign, const int grade_required_to_execute)
	:_name(name), 
	_signed(false),
	_grade_required_to_sign(grade_required_to_sign),
	_grade_required_to_execute(grade_required_to_execute)
	{
			if (this->_grade_required_to_sign < 1 || this->_grade_required_to_execute < 1)
		{
			throw Form::GradeTooHighException();
		}
		else if (this->_grade_required_to_sign > 150 || this->_grade_required_to_execute > 1)
		{
			throw Form::GradeTooLowException();
		}
	}

Form::Form(const Form & obj) 
	: _name(obj._name), 
	_signed(obj._signed) ,
	_grade_required_to_sign(obj._grade_required_to_sign), 
	_grade_required_to_execute(obj._grade_required_to_execute) {}

Form & Form::operator=(const Form & obj)
{
	if (this != &obj)
	{
		this->_signed = obj._signed;
	}
	return (*this);
}

std::string Form::getName() const { return this->_name; }

bool Form::getSigned() const { return _signed; }

int Form::getSignGrade() const { return _grade_required_to_sign; }

int Form::getExecGrade() const { return _grade_required_to_execute; }

void Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_required_to_sign)
	{
		this->_signed = true;
	}
	else
		throw Form::GradeTooLowException();
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too High..";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low..";
}

std::ostream & operator<<(std::ostream & cout, const Form & obj)
{
	cout << "Form [" << obj.getName() << "] | Status: "
		 << (obj.getSigned() ? "Signed" : "Unsigned") 
		 << " | Required Sign Grade: " << obj.getSignGrade() 
		 << " | Required Exec Grade: " << obj.getExecGrade() << std::endl;
	return cout;
}

