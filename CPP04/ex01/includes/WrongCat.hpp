#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public	WrongAnimal
{

	public:

		WrongCat(void);
		WrongCat(std::string name);
		WrongCat(const WrongCat &cpy);
		~WrongCat(void);
		
		WrongCat	&operator=(const WrongCat &cpy);
		void		makeSound() const;
};