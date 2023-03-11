#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string name)
{
	_type = name;
	std::cout << "Dog name constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy): Animal()
{
	*this = cpy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
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
	std::cout << "BARK BARK" << std::endl;
}
