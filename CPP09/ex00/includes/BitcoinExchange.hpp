#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>
#include <climits>
#include <vector>
#include <cstdio>
#include <unistd.h>

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
	private:
		int	_N;

	public:
		std::vector<int>	array;
		BitcoinExchange(void);
		BitcoinExchange(unsigned int N);
		BitcoinExchange(const BitcoinExchange &cpy);
		virtual ~BitcoinExchange();

		BitcoinExchange	&operator=(const BitcoinExchange &obj);
		unsigned int	getSize(void) const;

		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator X, std::vector<int>::iterator N);

		unsigned int	shortestBitcoinExchange();
		unsigned int	longestBitcoinExchange();
	
		class	DequeFullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	BitcoinExchangeException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& os, BitcoinExchange const& obj);