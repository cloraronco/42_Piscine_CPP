#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Unknown ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREY << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREY << "ClapTrap name constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout << GREY << "ClapTrap copy constructor called" << RESET << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GREY << "ClapTrap destructor called" << RESET << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy)
{
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	return (*this);
}




void	ClapTrap::setDamage(int nb)
{
	_attackDamage = nb;
}

int		ClapTrap::getDamage(void) const
{
	return (_attackDamage);
}




void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << BLUE << _name << " attacks " << target
			<< ", causing " << _attackDamage
			<< " points of damage !" << RESET << std::endl;
		_energyPoints -= 1;
		std::cout << _name << " has now " << _energyPoints << " energy points !" << std::endl;
	}
	else if (_energyPoints > 0 && _hitPoints <= 0)
		std::cout << _name << "'s soul try to attack but his body refuse. He is already dead !" << std::endl;
	else
		std::cout << _name << " has no enough energy points to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout << RED << _name << " is already dead." << RESET << std::endl;
	else if ((int)amount >= _hitPoints)
	{
		amount = _hitPoints;
		std::cout << RED << _name << " is attacked and lost " << amount << " HP !" << RESET  << std::endl;
		_hitPoints -= amount;
		std::cout << _name << " has now " << _hitPoints << " HP !" << std::endl;
		std::cout << _name << " is fired and dead."<< std::endl;
	}
	else
	{
		std::cout << RED << _name << " is attacked ! -" << amount << " HP !" << RESET << std::endl;
		_hitPoints -= amount;
		std::cout << _name << " has now " << _hitPoints << " HP !" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << GREEN << "Brigitte takes care of " << _name << "... +" << amount << " HP !" << RESET << std::endl;
		_hitPoints += amount;
		_energyPoints -=1;
		std::cout << _name << " has now " << _hitPoints << " HP and " << _energyPoints << " energy points !" << std::endl;
	}
	else if (_energyPoints > 0 && _hitPoints <= 0)
		std::cout << PINK << _name << " is waiting for Brigitte in Paradise." << std::endl;
	else
		std::cout << _name << " has no enough energy points to join Brigitte." << RESET << std::endl;
}