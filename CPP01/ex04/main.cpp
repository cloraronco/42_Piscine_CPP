#include <iostream>
#include <fstream>

int	main(int ac, char **av) {

	if (ac != 4)
	{
		std::cout << "You must have three inputs :  <filename>  <s1>  <s2> ." << std::endl;
		return (1);
	}

	std::string		line;
	size_t			pos;

	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::ifstream	file(av[1]);
	std::ofstream	new_file((std::string) av[1] + ".replace");

	if (file && new_file)
	{
		while (getline(file, line))
		{
			pos = line.find(av[2]);
			while (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, av[3]);
				pos = line.find(av[2], pos + s1.length());
			}
			new_file << line << std::endl;
		}
	}
	else
	{
		std::cout << "Files stream error" << std::endl;
		return (1);
	}
	file.close();
	new_file.close();
	return (0);
}