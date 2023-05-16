#include "../includes/Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	p1("Edith", 15);
		// Bureaucrat	p3;
		Bureaucrat	p3(p1);
		// p3 = Bureaucrat();
		Bureaucrat	p2("Marcus", 149);

		std::cout << p1;
		// std::cout << p2;
		// std::cout << p3;
		p1.incrementation(10);
		std::cout << p1;
		p1.decrementation(5);
		std::cout << p1;
		// p1++;
		// p1++;
		// p2--;

		// std::cout << p1;
		std::cout << p2;
		// p2--;
		// p2--;
	}
	catch (std::exception &e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	return (0);
}