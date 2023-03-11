#pragma once
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal(void);
		
		WrongAnimal	&operator=(const WrongAnimal &cpy);

		virtual std::string	getType(void) const;
		virtual void		makeSound() const;

	protected:
		std::string _type;
};
