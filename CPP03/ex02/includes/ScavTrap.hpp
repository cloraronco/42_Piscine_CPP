#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : public	ClapTrap
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap(void);
		
		ScavTrap	&operator=(const ScavTrap &cpy);

		void	attack(const std::string& target);
		void	guardGate();

	private:

		bool	_gateKeeper;
};