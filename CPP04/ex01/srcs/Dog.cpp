#include "../includes/Dog.hpp"

Dog::Dog(void) {
	_type = "Dog";
	std::cout << GREY << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(std::string name) {
	_type = name;
	std::cout << GREY << "Dog name constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &cpy): Animal(cpy), brain(new Brain) {
	std::cout << GREY << "Dog copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void) {
	std::cout << GREY << "Dog destructor called" << RESET << std::endl;
}

Dog	&Dog::operator=(const Dog &cpy) {
	_type = cpy._type;
	*brain = *cpy.brain;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << MAGENTA << "BARK BARK" << RESET << std::endl;
}

Brain& Dog::getBrain(void) {
	return (*brain);
}