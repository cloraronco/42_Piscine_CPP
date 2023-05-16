#pragma once
#include <iostream>
#include <stdlib.h>
#include "Form.hpp"

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

class Form;
class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &cpy);

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

		void		incrementation(int i);		
		void		decrementation(int i);	
		std::string	getName() const;
		int			getGrade(void) const;
		void		signForm(Form& form);
		void		executeForm(Form const& form);

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& obj);