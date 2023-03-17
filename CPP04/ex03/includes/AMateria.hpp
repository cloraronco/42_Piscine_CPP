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

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria &cpy);
		virtual ~AMateria(void);
		
		AMateria	&operator=(const AMateria &cpy);

		std::string const	&getType(void) const;
		virtual AMateria*	clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};
