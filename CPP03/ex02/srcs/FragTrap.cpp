#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "Unknown FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30; 
	std::cout << GREY << "FrapTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30; 
	std::cout << GREY << "FragTrap name constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap()
{
	*this = cpy;
	std::cout << GREY << "FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << GREY << "FragTrap destructor called" << RESET << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy)
{
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << MAGENTA << _name << " asks to a high five !" << RESET << std::endl;
}
