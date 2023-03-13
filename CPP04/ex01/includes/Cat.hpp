#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public	Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		Cat(const Cat &cpy);
		virtual ~Cat(void);
		
		Cat	&operator=(const Cat &cpy);

		virtual std::string	getType(void) const;
		virtual void		makeSound() const;
	
	private:
		Brain*	_brain;
};