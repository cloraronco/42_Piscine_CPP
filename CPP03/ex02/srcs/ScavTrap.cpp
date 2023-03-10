#include "../includes/ScavTrap.hpp"

// ScavTrap::ScavTrap(void)
// {
// 	std::cout << "ScavTrap default constructor called" << std::endl;
// }

ScavTrap::ScavTrap(std::string name) : _gateKeeper(0)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20; 
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap()
{
	*this = cpy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy)
{
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << _name << " attacks " << target
			<< ", causing " << _attackDamage
			<< " points of damage !" << std::endl;
		_energyPoints -= 1;
		std::cout << _name << " has now " << _energyPoints << " energy points !" << std::endl;
	}
	else if (_energyPoints > 0 && _hitPoints <= 0)
		std::cout << _name << "'s soul try to attack but his body refuse. He is already dead !" << std::endl;
	else
		std::cout << _name << " has no enough energy points to attack." << std::endl;
}


void	ScavTrap::guardGate()
{
	if (!_gateKeeper)
	{
		_gateKeeper = 1;
		std::cout << _name << " : Gate keeper mode activated !" << std::endl;
	}
	else
	{
		_gateKeeper = 0;
		std::cout << _name << " :  Gate keeper mode desactivated !" << std::endl;
	}
}