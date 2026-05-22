#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_required_to_sign;
		const int _grade_required_to_execute;
	public:
		Form();
		~Form();
		Form(const std::string name, const int grade_required_to_sign, const int grade_required_to_execute);
		Form(const Form &obj);
		Form& operator=(const Form& obj);
		std::string getName() const;
		bool getSigned() const;
		int	getSignGrade() const;
		int getExecGrade() const;
		void beSigned(const Bureaucrat &bureaucrat);
		class GradeTooHighException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException :public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};
std::ostream& operator<<(std::ostream& cout, const Form& obj);

#endif