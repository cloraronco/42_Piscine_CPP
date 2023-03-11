#pragma once
#include <iostream>
#include "Animal.hpp"

class	Dog : public	Animal
{

	public:

		Dog(void);
		Dog(std::string name);
		Dog(const Dog &cpy);
		virtual ~Dog(void);
		
		Dog	&operator=(const Dog &cpy);

		virtual std::string	getType(void) const;
		virtual void		makeSound() const;
};