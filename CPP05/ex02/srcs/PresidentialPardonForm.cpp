#include "../includes/PresidentialPardonForm.hpp"

/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5),
														_target("Unknown")
{
	std::cout << GREY << "PresidentialPardonForm default constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5),
																	_target(target)
{
	std::cout << GREY << "PresidentialPardonForm name constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): Form(cpy.getName(),
																						cpy.getGradeToSign(),
																						cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "PresidentialPardonForm copy constructor called" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << GREY << "PresidentialPardonForm destructor called" << RESET << std::endl;
}

/*___________________________ OVERLOADING OPERATORS________________________________*/

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cerr << RED << "Can't copy constant variable." << RESET << std::endl;
	_target = obj._target;
	return (*this);
}


/*________________________________MEMBERS FONCTIONS________________________________*/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw std::logic_error(executor.getName() + " can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error(executor.getName() + " can't execute because his grade is too low.\n");
	if (getSigned() && (executor.getGrade() <= getGradeToExec()))
		std::cout << MAGENTA << _target << " is forgiven by Zaphod Beeblebrox." << RESET << std::endl;
}