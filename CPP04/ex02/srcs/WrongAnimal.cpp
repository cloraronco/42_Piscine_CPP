#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
	std::cout << GREY << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	*this = cpy;
	std::cout << GREY << "WrongAnimal copy constructor called" << RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << GREY << "WrongAnimal destructor called" << RESET << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &cpy)
{
	_type = cpy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << RED << "A WrongAnimal makes noise." << RESET << std::endl;
}
