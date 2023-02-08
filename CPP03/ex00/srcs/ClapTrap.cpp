#include "../includes/ClapTrap.hpp"


ClapTrap::ClapTrap(void): _name(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name) {}

ClapTrap::ClapTrap(ClapTrap const& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}