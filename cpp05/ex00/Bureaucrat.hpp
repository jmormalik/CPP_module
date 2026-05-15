#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string _name;
		int				_grade;
	public:
		Bureaucrat();
		Bureaucrat(int grade, const std::string name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		std::string getName() const; 
		int getGrade() const;
		class GradeTooHighException
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException
		{
			public:
				virtual const char* what() const throw();
		};
				
};
std::ostream& operator<<(std::ostream& cout, const Bureaucrat obj);

#endif