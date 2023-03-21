#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain()) {
	std::cout << GREY << "Dog default constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++){
		brain->_ideas[i] = "Dog likes cat.";
	}
	_type = "Dog";
}

Dog::Dog(std::string name): Animal(), brain(new Brain()) {
	std::cout << GREY << "Dog name constructor called" << RESET << std::endl;
	for (int i = 0; i < 100; i++){
		brain->_ideas[i] = "Dog likes cat.";
	}
	_type = name;
}

Dog::Dog(const Dog &cpy): Animal(cpy), brain(new Brain()) {
	std::cout << GREY << "Dog copy constructor called" << RESET << std::endl;
}

Dog::~Dog(void) {
	std::cout << GREY << "Dog destructor called" << RESET << std::endl;
	delete brain;
}


Dog	&Dog::operator=(const Dog &cpy) {
	_type = cpy._type;
	*brain = *cpy.brain;
	return (*this);
}


void	Dog::makeSound(void) const {
	std::cout << PINK << "BARK BARK" << RESET << std::endl;
}

Brain& Dog::getBrain(void) {
	return (*brain);
}