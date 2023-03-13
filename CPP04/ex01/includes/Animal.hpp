#pragma once
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal &cpy);
		virtual ~Animal(void);
		
		Animal	&operator=(const Animal &cpy);

		virtual std::string	getType(void) const;
		virtual void		makeSound() const;

	protected:
		std::string _type;
};
