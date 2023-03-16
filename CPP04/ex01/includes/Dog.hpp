#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public	Animal
{

	public:
		Dog(void);
		Dog(std::string name);
		Dog(const Dog &cpy);
		~Dog(void);
		
		Dog	&operator=(const Dog &cpy);

		void	makeSound() const;
		Brain&	getBrain(void);
	
	private:
		Brain*	brain;

};