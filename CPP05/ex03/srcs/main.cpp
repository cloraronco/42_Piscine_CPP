#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	Bureaucrat				Piaf("Edith Piaf", 5);
	// Bureaucrat				Miller("Marcus Miller", 149);
	// PresidentialPardonForm	apologize("Trump");
	// RobotomyRequestForm		RobotRequest("R2D2");
	// ShrubberyCreationForm	makeTree("Been");

	Intern	someRandomIntern;
	Form*	rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	try
	{
		rrf->beSigned(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		rrf->execute(Piaf);
		if (rrf)
			delete (rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	

	// try
	// {
	// 	Piaf.signForm(apologize);
	// 	apologize.execute(Piaf);
	// 	apologize.execute(Miller);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// try
	// {
	// 	Piaf.signForm(RobotRequest);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Piaf);
	// 	RobotRequest.execute(Miller);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// try
	// {
	// 	Piaf.signForm(makeTree);
	// 	makeTree.execute(Piaf);
	// 	makeTree.execute(Miller);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }
	return (0);
}