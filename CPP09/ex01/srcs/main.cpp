#include "../includes/RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << RED << "Please enter one argument." << RESET << std::endl;
		std::cerr << YELLOW << "Exemple: ./RPN \"3 * 5\"" << RESET << std::endl;
		return (1);
	}

	RPN	maths(av[1]);
	maths.calculate();
	return (0);
}