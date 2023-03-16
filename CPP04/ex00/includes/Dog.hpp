#pragma once
#include <iostream>
#include "Animal.hpp"

class	Dog : public	Animal
{

	public:

		Dog(void);
		Dog(std::string name);
		Dog(const Dog &cpy);
		~Dog(void);
		
		Dog	&operator=(const Dog &cpy);
		void	makeSound() const;
};