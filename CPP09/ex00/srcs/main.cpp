#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Please enter a path." << RESET << std::endl;
		return (1);
	}

	std::ifstream input_file(argv[1]);
	std::ifstream db_file("data/data.csv");
	if (!input_file.is_open() || !db_file.is_open())
	{
		std::cout << RED << "Error: file not found." << RESET << std::endl;
		return (1);
	}

	BitcoinExchange PROCESS(db_file);

	std::string line;
	std::getline(input_file, line);
	while (input_file.good())
	{
		std::getline(input_file, line);
		if (line.empty())
			continue;
		PROCESS.process(line);
	}
}