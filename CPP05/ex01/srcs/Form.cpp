#include "../includes/Form.hpp"

Form::Form(void): _name("Unknown"), _signed(false), _gradeToSign(50), _gradeToExec(150)
{
	std::cout << GREY << "Form default constructor called" << RESET << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	std::cout << GREY << "Form name constructor called" << RESET << std::endl;
}

Form::Form(const Form &cpy): _name(cpy.getName()), _signed(cpy.getSigned()), _gradeToSign(cpy.getGradeToSign()), _gradeToExec(cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "Form copy constructor called" << RESET << std::endl;
}

Form::~Form(void)
{
	std::cout << GREY << "Form destructor called" << RESET << std::endl;
}




Form	&Form::operator=(const Form &cpy)
{
	_signed = cpy._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, Form const& obj)
{
	os << "-Form name : " << obj.getName() << std::endl
    << "-Signature status : " << obj.getSigned() << std::endl
    << "-Grade to sign : " << obj.getGradeToSign() << std::endl
    << "-Grade tp exec : " << obj.getGradeToExec() << std::endl;
	return (os);
}




std::string	Form::getName() const
{
	return(_name);
}

bool	Form::getSigned() const
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

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}