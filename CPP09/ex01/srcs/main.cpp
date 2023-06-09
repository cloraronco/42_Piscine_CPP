#include "../includes/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN \"your_math\"" << std::endl;
		return (1);
	}

	RPN math(av[1]);
	math.calculate();
	return (0);
}