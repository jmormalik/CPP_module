#include "AForm.hpp"

AForm::AForm()
	:_name("default_name"), 
	_signed(false),
	_grade_required_to_sign(0), 
	_grade_required_to_execute(0)
	{}

AForm::~AForm() {}

AForm::AForm(const std::string name, const int grade_required_to_sign, const int grade_required_to_execute)
	:_name(name), 
	_signed(false),
	_grade_required_to_sign(grade_required_to_sign),
	_grade_required_to_execute(grade_required_to_execute)
	{
		if (this->_grade_required_to_sign < 1 || this->_grade_required_to_execute < 1)
		{
			throw AForm::GradeTooHighException();
		}
		else if (this->_grade_required_to_sign > 150 || this->_grade_required_to_execute > 1)
		{
			throw AForm::GradeTooLowException();
		}
	}

AForm::AForm(const AForm & obj) 
	: _name(obj._name), 
	_signed(obj._signed) ,
	_grade_required_to_sign(obj._grade_required_to_sign), 
	_grade_required_to_execute(obj._grade_required_to_execute) {}

AForm & AForm::operator=(const AForm & obj)
{
	if (this != &obj)
	{
		this->_signed = obj._signed;
	}
	return (*this);
}

std::string AForm::getName() const { return this->_name; }

bool AForm::getSigned() const { return _signed; }

int AForm::getSignGrade() const { return _grade_required_to_sign; }

int AForm::getExecGrade() const { return _grade_required_to_execute; }

void AForm::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_required_to_sign)
	{
		this->_signed = true;
	}
	else
		throw AForm::GradeTooLowException();
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return "Grade too High..";
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return "Grade too Low..";
}

const char * AForm::FormNotSignedException::what() const throw()
{
	return "Form is not signed yet!";
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignGrade() == false) {
		throw AForm::FormNotSignedException();
	}
	if (executor.getGrade() > this->getExecGrade()) {
		throw AForm::GradeTooLowException();
	}
	this->executeAction();
}

std::ostream & operator<<(std::ostream & cout, const AForm & obj)
{
	cout << "AForm [" << obj.getName() << "] | Status: "
		 << (obj.getSigned() ? "Signed" : "Unsigned") 
		 << " | Required Sign Grade: " << obj.getSignGrade() 
		 << " | Required Exec Grade: " << obj.getExecGrade() << std::endl;
	return cout;
}

