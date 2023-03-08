#include <iostream>
#include <fstream>
#include <stdlib.h>

void	replace(char *av1, char *av2, char *av3)
{
	std::string		line;
	size_t			pos;

	std::string		s1(av2);
	std::string		s2(av3);
	std::ifstream	file(av1);
	std::ofstream	new_file((std::string(av1) + ".replace").data());

	if (file && new_file)
	{
		while (getline(file, line))
		{
			pos = line.find(av2);
			while (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, av3);
				pos = line.find(av2, pos + s2.length());
			}
			new_file << line << std::endl;
		}
	}
	else
	{
		file.close();
		new_file.close();
		std::cout << "Files stream error" << std::endl;
		exit(EXIT_FAILURE);
	}
	file.close();
	new_file.close();
}

int	main(int ac, char **av) {

	if (ac != 4)
	{
		std::cout << "You must have three inputs :  <filename>  <s1>  <s2> ." << std::endl;
		return (1);
	}
	replace(av[1], av[2], av[3]);
	return (0);
}