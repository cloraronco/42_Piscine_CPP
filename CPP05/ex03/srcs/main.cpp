#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	Bureaucrat				Piaf("Piaf", 5);

	try
	{
		Intern	someRandomIntern;
		Form*	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(Piaf);
		rrf->execute(Piaf);
		if (rrf)
			delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	// Bureaucrat				Miller("Miller", 149);
	// PresidentialPardonForm	PPF("PPF");
	// RobotomyRequestForm		RobotRequest("RobotRequest");
	// ShrubberyCreationForm	makeTree("makeTree");

	// try
	// {
	// 	std::cout << PPF;
	// 	Piaf.signForm(PPF);
	// 	Piaf.signForm(PPF);
	// 	Piaf.executeForm(PPF);
	// 	Piaf.executeForm(PPF);
	// 	Miller.executeForm(PPF);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// try
	// {
	// 	Piaf.signForm(RobotRequest);
	// 	Piaf.executeForm(RobotRequest);
	// 	Miller.executeForm(RobotRequest);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }
	
	// try
	// {
	// 	Piaf.signForm(makeTree);
	// 	Piaf.executeForm(makeTree);
	// 	Miller.executeForm(makeTree);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }
	return (0);
}