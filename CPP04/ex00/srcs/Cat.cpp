#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	_type = name;
	std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal()
{
	*this = cpy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy)
{
	_type = cpy._type;
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAOW MAOW" << std::endl;
}
