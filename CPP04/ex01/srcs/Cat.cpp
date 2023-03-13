#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	_type = name;
	_brain = new Brain();
	std::cout << "Cat name constructor called" << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(), _brain()
{
	*this = cpy;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy)
{
	_type = cpy._type;
	_brain = new Brain(*cpy._brain);
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
