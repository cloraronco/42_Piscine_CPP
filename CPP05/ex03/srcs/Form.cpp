#include "../includes/Form.hpp"
#include <iostream>

/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Form::Form(void): _name("Unknown"), _signed(false), _gradeToSign(50), _gradeToExec(150)
{
	std::cout << GREY << "Form default constructor called" << RESET << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec): _name(name),
																_signed(false),
																_gradeToSign(gradeToSign),
																_gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << GREY << "Form name constructor called" << RESET << std::endl;
}

Form::Form(const Form &cpy): _name(cpy.getName()),
								_signed(cpy.getSigned()),
								_gradeToSign(cpy.getGradeToSign()),
								_gradeToExec(cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "Form copy constructor called" << RESET << std::endl;
}

Form::~Form(void)
{
	std::cout << GREY << "Form destructor called" << RESET << std::endl;
}


/*___________________________ OVERLOADING OPERATORS________________________________*/

Form	&Form::operator=(const Form &cpy)
{
	std::cerr << RED << "Can't copy constant variable." << RESET << std::endl;
	_signed = cpy._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Form const& obj)
{
	os << "-Form name : " << obj.getName() << std::endl
    << "-Signature status : " << obj.getSigned() << std::endl
    << "-Grade to sign : " << obj.getGradeToSign() << std::endl
    << "-Grade to exec : " << obj.getGradeToExec() << std::endl;
	return (os);
}


/*__________________________________ACCESSORS______________________________________*/

std::string	Form::getName() const
{
	return(_name);
}

bool		Form::getSigned() const
{
	return(_signed);
}

int			Form::getGradeToSign() const
{
	return(_gradeToSign);
}

int			Form::getGradeToExec() const
{
	return(_gradeToExec);
}


/*________________________________MEMBERS FONCTIONS________________________________*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else if (_signed == true)
		throw std::invalid_argument("it is already signed.");
	else
		_signed = true;
}
