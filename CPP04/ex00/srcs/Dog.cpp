#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << GREY << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(std::string name)
{
	_type = name;
	std::cout << GREY << "Dog name constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy): Animal()
{
	*this = cpy;
	std::cout << GREY << "Dog copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << GREY << "Dog destructor called" << RESET << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy)
{
	_type = cpy._type;
	return (*this);
}


std::string	Dog::getType(void) const
{
	return (_type);
}

void	Dog::makeSound(void) const
{
	std::cout << PINK << "BARK BARK" << RESET << std::endl;
}
