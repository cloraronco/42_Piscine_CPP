#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): _target("Unknown")
{
	std::cout << GREY << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): _target(target)
{
	_target = target;
	std::cout << GREY << "ShrubberyCreationForm name constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
{
	*this = cpy;
	std::cout << GREY << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << GREY << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}




ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	_target = cpy._target;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, ShrubberyCreationForm const& obj)
{
	os << obj.getName() << ", ShrubberyCreationForm grade " << obj.getGrade() << "." << std::endl;
	return (os);
}



const char* ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

// void		ShrubberyCreationForm::signForm(Form& form)
// {
// 	try
// 	{
// 		form.beSigned(*this);
// 		if (form.getSigned())
// 			std::cout << _name << " signed " << form.getName() << "." << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << RED << _name << " couldn’t sign " << form.getName() << " because " << e.what() << RESET << std::endl;
// 	}
	
// }