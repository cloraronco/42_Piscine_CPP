#include "../includes/Animal.hpp"

Animal::Animal(void): _type("Animal")
{
	std::cout << GREY << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	*this = cpy;
	std::cout << GREY << "Animal copy constructor called" << RESET << std::endl;
}

Animal::~Animal(void)
{
	std::cout << GREY << "Animal destructor called" << RESET << std::endl;
}

Animal	&Animal::operator=(const Animal &cpy)
{
	_type = cpy._type;
	return (*this);
}

std::string	Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << BLUE << "An animal makes noise." << RESET << std::endl;
}
