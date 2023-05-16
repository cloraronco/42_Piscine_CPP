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
		throw std::logic_error(executor.getName() + " can't execute a non-signed form.");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error(executor.getName() + " can't execute because his grade is too low.");
	if (getSigned() && (executor.getGrade() <= getGradeToExec()))
	{
		std::ofstream	output((_target + "_shrubbery").c_str(), std::ios_base::app);
		
		output <<	"       .     .     .      +     .      .          ." << std::endl <<
					"     .       .      .     #       .           ." << std::endl <<
					"        .      .         ###            .      .      ." << std::endl <<
					"      .      .   #:. .:## ##:. .:#  .      ." << std::endl <<
					"          .      .  #### ### ####      .       ." << std::endl <<
					"       .     #:.    .:# ### #:.    .:#  .        .       ." << std::endl <<
					"  .              ######### #########        .        ." << std::endl <<
					"        .     #:.   #### ### ####   .:#   .       ." << std::endl <<
					"     .     .   #######  ## ##  #######                 ." << std::endl <<
					"                . ## ##### ##### ##           .      ." << std::endl <<
					"    .    #:. ...  .:## ### ### ##:.  ... .:#     ." << std::endl <<
					"      .      ####### ## ##### ## #######      .     ." << std::endl <<
					"    .    .      #####  #######  #####    .      ." << std::endl <<
					"            .            000          .     ." << std::endl <<
					"       .         .   .   000     .        .       ." << std::endl <<
					"........................O000O........................" << std::endl;
		output.close();
	}
}