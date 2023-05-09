#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5), _target("Unknown")
{
	std::cout << GREY << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
	_target = target;
	std::cout << GREY << "PresidentialPardonForm name constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << GREY << "PresidentialPardonForm destructor called" << RESET << std::endl;
}




PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	_target = obj._target;
	return (*this);
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw std::logic_error(executor.getName() + " can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error(executor.getName() + " can't execute because grade is too low.\n");
	return;
}