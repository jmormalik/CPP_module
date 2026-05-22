#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _grade_required_to_sign;
		const int _grade_required_to_execute;
	public:
		AForm();
		~AForm();
		AForm(const std::string name, const int grade_required_to_sign, const int grade_required_to_execute);
		AForm(const AForm &obj);
		AForm& operator=(const AForm& obj);
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
		class FormNotSignedException :public std::exception
		{
				public:
				virtual const char* what() const throw();
		};
		void execute(Bureaucrat const & executor) const;
		virtual void executeAction() const = 0;
};
std::ostream& operator<<(std::ostream& cout, const AForm& obj);

#endif