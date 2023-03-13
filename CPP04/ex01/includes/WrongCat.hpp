#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public	WrongAnimal
{

	public:

		WrongCat(void);
		WrongCat(std::string name);
		WrongCat(const WrongCat &cpy);
		virtual ~WrongCat(void);
		
		WrongCat	&operator=(const WrongCat &cpy);

		virtual std::string	getType(void) const;
};