#pragma once
#include <iostream>
#include <stack>
#include <list>
#include <deque>

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
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack &cpy): std::stack<T>(cpy) {};

		MutantStack<T>&	operator=(const MutantStack<T> &obj)
		{
			this->c = obj.c;
			return (*this);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}

};