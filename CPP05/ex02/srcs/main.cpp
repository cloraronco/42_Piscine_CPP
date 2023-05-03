#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	Piaf("Edith", 15);
		Bureaucrat	Miller("Marcus", 149);
		Form		form1("Form 0", 40, 10);
		Form		form2("Form 1", 40, 60);

		std::cout << Piaf;
		std::cout << Miller;
		std::cout << form1;
		std::cout << form2;

		Piaf++;
		Piaf++;
		Miller--;
		Piaf.signForm(form1);
		Miller.signForm(form1);

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