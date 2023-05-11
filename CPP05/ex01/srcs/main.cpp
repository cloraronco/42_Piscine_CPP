#include "../includes/Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	Piaf("Piaf", 15);
	Bureaucrat	Miller("Miller", 50);
	Form		form1("Form 1", 40, 10);
	Form		form2("Form 2", 40, 60);

	try
	{
		std::cout << Piaf;
		std::cout << Miller;
		std::cout << form1;
		std::cout << form2;

		Piaf++;
		Piaf++;
		Miller--;
		Piaf.signForm(form1);
		Miller.signForm(form2);

		std::cout << Piaf;
		std::cout << Miller;
		Miller--;
		Miller--;
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (0);
}