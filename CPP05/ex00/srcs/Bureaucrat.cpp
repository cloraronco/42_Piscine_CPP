#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Unknown")
{
	std::cout << GREY << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
	std::cout << GREY << "Bureaucrat name constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
	std::cout << GREY << "Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << GREY << "Bureaucrat destructor called" << RESET << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	_name = cpy._name;
	return (*this);
}




// void	Bureaucrat::setDamage(int nb)
// {
// 	_attackDamage = nb;
// }

// int		Bureaucrat::getDamage(void) const
// {
// 	return (_attackDamage);
// }
