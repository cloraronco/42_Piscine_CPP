#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int _gradeToExec);
		Form(const Form& cpy);
		virtual ~Form();

		Form&	operator=(const Form& obj);

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
		
		void	beSigned(const Bureaucrat& bureaucrat);
		void	signForm(void);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
};

std::ostream &operator<<(std::ostream& os, Form const& obj);