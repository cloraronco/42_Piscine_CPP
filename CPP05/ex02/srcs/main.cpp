#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat				Piaf("Piaf", 5);
	Bureaucrat				Miller("Miller", 149);
	PresidentialPardonForm	Apologize("Apologize");
	RobotomyRequestForm		RobotRequest("RobotRequest");
	ShrubberyCreationForm	makeTree("makeTree");

	try
	{
		Piaf.signForm(Apologize);
		Apologize.execute(Piaf);
		Apologize.execute(Miller);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try
	{
		Piaf.signForm(RobotRequest);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Piaf);
		RobotRequest.execute(Miller);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	try
	{
		Piaf.signForm(makeTree);
		makeTree.execute(Piaf);
		makeTree.execute(Miller);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (0);
}