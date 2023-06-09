#pragma once
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <ctime>
#include <iomanip>
#include <cstdlib>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &cpy);
		BitcoinExchange(std::ifstream &file);
		~BitcoinExchange(void);

		BitcoinExchange &operator=(const BitcoinExchange &rhs);

		void	process(const std::string &line);

	private:
		std::map<std::string, double> _rates;
		static bool	_is_valid_date(const std::string &date);
		static bool	_is_valid_rate(const std::string &date);

};
