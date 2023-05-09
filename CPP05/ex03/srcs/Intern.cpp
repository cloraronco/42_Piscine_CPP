#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	std::cout << GREY << "Intern default constructor called" << RESET << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
	std::cout << GREY << "Intern copy constructor called" << RESET << std::endl;
}

Intern::~Intern(void)
{
	std::cout << GREY << "Intern destructor called" << RESET << std::endl;
}


Intern	&Intern::operator=(const Intern &obj)
{
	(void)obj;
	return (*this);
}

Form*	Intern::ppf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates" << formName << std::endl;
	return (new PresidentialPardonForm(targetName));
}

Form*	Intern::rrf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates" << formName << std::endl;
	return (new RobotomyRequestForm(targetName));
}

Form*	Intern::scf(std::string formName, std::string targetName)
{
	std::cout << "Intern creates" << formName << std::endl;
	return (new ShrubberyCreationForm(targetName));
}

Form*	Intern::makeForm(std::string formName, std::string targetName)
{
	
}
