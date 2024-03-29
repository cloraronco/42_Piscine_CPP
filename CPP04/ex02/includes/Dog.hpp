#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public	Animal
{

	public:
		Dog(void);
		Dog(std::string name);
		Dog(const Dog &cpy);
		virtual ~Dog(void);
		
		Dog	&operator=(const Dog &cpy);

		void	makeSound() const;
		Brain&	getBrain(void);
	
	private:
		Brain*	brain;

};