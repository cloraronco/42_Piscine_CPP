#include "../includes/Cat.hpp"

Cat::Cat(void) {
	_type = "Cat";
	std::cout << GREY << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(std::string name) {
	_type = name;
	std::cout << GREY << "Cat name constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &cpy): Animal(cpy), brain(new Brain) {
	std::cout << GREY << "Cat copy constructor called" << RESET << std::endl;
}

Cat::~Cat(void) {
	std::cout << GREY << "Cat destructor called" << RESET << std::endl;
}

Cat	&Cat::operator=(const Cat &cpy) {
	_type = cpy._type;
	*brain = *cpy.brain;
	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << MAGENTA << "MAOW MAOW" << RESET << std::endl;
}

Brain& Cat::getBrain(void) {
	return (*brain);
}