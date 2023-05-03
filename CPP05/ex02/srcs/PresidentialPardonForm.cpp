#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): _target("Unknown")
{
	std::cout << GREY << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target)
{
	_target = target;
	std::cout << GREY << "PresidentialPardonForm name constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy)
{
	*this = cpy;
	std::cout << GREY << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << GREY << "PresidentialPardonForm destructor called" << RESET << std::endl;
}




PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	_target = cpy._target;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, PresidentialPardonForm const& obj)
{
	os << obj.getName() << ", PresidentialPardonForm grade " << obj.getGrade() << "." << std::endl;
	return (os);
}



const char* PresidentialPardonForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

// void		PresidentialPardonForm::signForm(Form& form)
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