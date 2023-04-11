#pragma once
#include <iostream>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &cpy);
		Bureaucrat	operator++(int);
		Bureaucrat	operator--(int);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		std::string	getName() const;
		int		getGrade(void) const;

	private:
		const std::string	_name;
		int			_grade;

};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& obj);