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
	std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
	return (new PresidentialPardonForm(targetName));
}

Form*	Intern::rrf(std::string formName, std::string targetName)
{
	std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
	return (new RobotomyRequestForm(targetName));
}

Form*	Intern::scf(std::string formName, std::string targetName)
{
	std::cout << GREEN << "Intern creates " << formName << RESET << std::endl;
	return (new ShrubberyCreationForm(targetName));
}

Form*	Intern::makeForm(std::string formName, std::string targetName)
{
	int	i = 0;
	Form*	ptr;

	Form*	(Intern::*formType[3])(std::string, std::string) =
	{
		&Intern::ppf,
		&Intern::rrf,
		&Intern::scf
	};

	std::string	index[3] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	while (i < 3)
	{
		if (!index[i].compare(formName))
			break;
		i++;
	}
	if (i == 3)
		throw std::logic_error(formName + " doesn't exist.");
	else
		ptr = (this->*formType[i])(formName, targetName);
	return (ptr);
}
