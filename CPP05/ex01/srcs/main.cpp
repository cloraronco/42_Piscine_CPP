#include "../includes/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	Piaf("Piaf", 15);
	Bureaucrat	p1(Piaf);
	Bureaucrat	Miller("Miller", 50);
	Form		form1("Form 1", 40, 10);

	try
	{
		std::cout << Piaf;
		std::cout << p1;
		std::cout << Miller;
		std::cout << form1 << std::endl;

		Piaf.incrementation(5);
		Miller.decrementation(2);
		Piaf.signForm(form1);
		Piaf.signForm(form1);
		Miller.signForm(form1);

		std::cout << Piaf;
		std::cout << Miller;
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (0);
}