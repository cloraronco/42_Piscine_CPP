#pragma once
#include <iostream>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"
#define WHITE_B "\e[01;37m"

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &cpy);
		virtual ~Animal(void);
		
		Animal	&operator=(const Animal &cpy);

		std::string		getType(void) const;
		virtual void	makeSound() const = 0;

	protected:
		std::string _type;
};
