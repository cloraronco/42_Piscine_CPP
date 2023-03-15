#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
	std::cout << GREY << "WrongCat default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(std::string name)
{
	_type = name;
	std::cout << GREY << "WrongCat name constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy): WrongAnimal()
{
	*this = cpy;
	std::cout << GREY << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << GREY << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &cpy)
{
	_type = cpy._type;
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (_type);
}