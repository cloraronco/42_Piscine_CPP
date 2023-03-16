#pragma once
#include <iostream>
#include "Animal.hpp"

class	Cat : public	Animal
{

	public:

		Cat(void);
		Cat(std::string name);
		Cat(const Cat &cpy);
		~Cat(void);
		
		Cat	&operator=(const Cat &cpy);

		void	makeSound() const;
};