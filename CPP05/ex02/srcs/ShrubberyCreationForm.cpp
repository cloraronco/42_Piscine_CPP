#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("Unknown")
{
	std::cout << GREY << "ShrubberyCreationForm default constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	_target = target;
	std::cout << GREY << "ShrubberyCreationForm name constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << GREY << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}



ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	_target = obj._target;
	return (*this);
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw std::logic_error(executor.getName() + " can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error(executor.getName() + " can't execute because grade is too low.\n");
	std::ofstream	output((std::string)_target + "_shrubbery", std::ios_base::app);
	
	output <<	"            ,@@@@@@@," << std::endl <<
				"    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
				" ,&\\%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl <<
				",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl <<
				"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl <<
				"%&&%/ %&\\%\\%&&@@\\ V /@@' `88\\8 `/88'" << std::endl <<
				"`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl <<
				"    |o|        | |         | |" << std::endl <<
				"    |.|        | |         | |" << std::endl <<
				" \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	output.close();
}