#pragma once
#include <iostream>

class ClapTrap
{

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap(void);
		
		ClapTrap	&operator=(const ClapTrap &cpy);

		void	setDamage(int nb);
		int		getDamage(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

};
