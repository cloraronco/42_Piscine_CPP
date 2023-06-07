#include "../includes/BitcoinExchange.hpp"

void	check_line(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] < 4)
		{
			if (!isdigit(str[i]))
			{
				std::cerr << "Error: bad input" << std::endl;
				return ;
			}
		}
		if (i == 4 && str[i] != '-')
		{
			std::cerr << "Error: bad input" << std::endl;
			return ;
		}
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "error: could not open file" << std::endl;
		return (0);
	}
	std::fstream	file;
	file.open(av[1], std::ios::in);
	if (file.is_open())
	{
		std::string str;
		while (getline(file,str))
		{
			std::string format("%d/%m/%Y");
			std::date d;
			d = parse_date(str, format, svp);
			check_line(str);
		}
	}
	else
		std::cerr << "Not a file" << std::endl;



	// check_file();
	// BitcoinExchange sp = BitcoinExchange(5);

	// std::cout << "---Main test---" << std::endl;
	// try
	// {
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << GREEN << sp.shortestBitcoinExchange() << RESET << std::endl;
	// 	std::cout << GREEN << sp.longestBitcoinExchange() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }


	// /*___________________________________________________________________________*/

	// std::cout << "---Oversize test---" << std::endl;
	// try
	// {
	// 	sp.addNumber(6);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }


	// /*___________________________________________________________________________*/

	// BitcoinExchange sp1 = BitcoinExchange(5);

	// std::cout << "---BitcoinExchange exceptions---" << std::endl;
	// try
	// {
	// 	sp1.addNumber(6);
	// 	std::cout << GREEN << sp1.shortestBitcoinExchange() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	// try
	// {
	// 	std::cout << GREEN << sp1.longestBitcoinExchange() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }


	// /*___________________________________________________________________________*/

	// std::cout << "---Range of iterators test---" << std::endl;

	// std::vector<int> v;
	// std::srand(time(NULL));
	// int size = 1000000;
	// for(int i = 0; i < size; i++)
	// {
	// 	v.push_back(rand());
	// }

	// BitcoinExchange sp5 = BitcoinExchange(size);

	// try
	// {
	// 	sp5.addNumber(v.begin(), v.end());
	// 	std::cout << GREEN << sp5.shortestBitcoinExchange() << RESET << std::endl;
	// 	std::cout << GREEN << sp5.longestBitcoinExchange() << RESET << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << RED << e.what() << RESET << std::endl;
	// }

	return 0;
}
