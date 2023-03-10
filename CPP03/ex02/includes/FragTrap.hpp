#pragma once
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public	ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &cpy);
		~FragTrap(void);
		
		FragTrap	&operator=(const FragTrap &cpy);

		void	highFivesGuys(void);
};