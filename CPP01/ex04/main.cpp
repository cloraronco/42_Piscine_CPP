#include <iostream>
#include <fstream>

int	main(int ac, char **av) {

	std::string	line;
	size_t		pos;

	if (ac != 4)
		return (1);
	std::string		s1(av[2]);
	std::ifstream	input(av[1]);
	std::ofstream	output((std::string) av[1] + "_replace.txt");


	if (input && output)
	{
		pos = line.find(av[2]);
		while (getline(input, line))
		{
			line.erase(pos);
			line.insert();
		}
	}
	input.close();
	output.close();
	return (0);
}