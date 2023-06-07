#pragma once
#include <iostream>
#include <algorithm>
#include <list>
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

class Span
{
	private:
		int	_N;

	public:
		std::vector<int>	array;
		Span(void);
		Span(unsigned int N);
		Span(const Span &cpy);
		virtual ~Span();

		Span	&operator=(const Span &obj);
		unsigned int	getSize(void) const;

		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator X, std::vector<int>::iterator N);

		unsigned int	shortestSpan();
		unsigned int	longestSpan();
	
		class	DequeFullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	SpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& os, Span const& obj);