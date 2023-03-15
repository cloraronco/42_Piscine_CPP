#include "../includes/ClapTrap.hpp"

/*____________Not enough hitPoints___________*/

int main(void)
{
	ClapTrap	Player("Macron");
	ClapTrap	Melenchon(Player);
	
	ClapTrap	NoName;

	Player.setDamage(3);
	Player.takeDamage(4);
	Player.beRepaired(2);
	Player.takeDamage(4);
	Player.takeDamage(4);

	NoName.takeDamage(2);

	return (0);
}


/*___________Not enough energyPoints__________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");
// 	ClapTrap	Melenchon(Player);

// 	ClapTrap	NoName;

// 	Player.setDamage(3);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.takeDamage(4);
// 	Player.beRepaired(2);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.beRepaired(2);

// 	NoName.takeDamage(2);

// 	return (0);
// }

/*_____________________Dead___________________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");
// 	ClapTrap	Melenchon(Player);

// 	ClapTrap	NoName;

// 	Player.setDamage(3);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.takeDamage(4);
// 	Player.beRepaired(2);
// 	Player.takeDamage(8);
// 	Player.takeDamage(8);
// 	Player.beRepaired(2);
// 	Player.attack("Melenchon");

// 	NoName.takeDamage(2);

// 	return (0);
// }