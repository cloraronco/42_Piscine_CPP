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

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &cpy);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &cpy);

		void	setDamage(int nb);
		int		getDamage(void) const;

	protected:
		std::string	_name;

};
