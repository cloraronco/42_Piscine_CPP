#pragma once
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <exception>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

template< typename T >
void easyfind(T const& tab, int i)
{
	typename T::const_iterator	it;

	it = std::find(tab.begin(), tab.end(), i);
	if (it != tab.end())
		std::cout << "Element found : [" << GREEN << *it << RESET << "]" << std::endl;
	else
		throw std::exception();
}
