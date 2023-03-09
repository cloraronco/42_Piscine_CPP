#include "../includes/ClapTrap.hpp"


ClapTrap::ClapTrap(void): _name(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {}

ClapTrap::ClapTrap(ClapTrap const& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& obj)
{

	_name = obj._name;
	_hitPoints = obj._hitPoints;
	_energyPoints = _energyPoints;
	_attackDamage = _attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _attackDamage << " points of damage !" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Destructor called" << std::endl;
	_hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Destructor called" << std::endl;
	_hitPoints += amount;
	_energyPoints -=1;
}