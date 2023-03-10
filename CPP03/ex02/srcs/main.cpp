#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

/*____________Not enough hitPoints___________*/

int main(void)
{
	ClapTrap	Emmanuel("Macron");
	ScavTrap	JeanLuc("Melenchon");
	FragTrap	Christine("Lagarde");

	Emmanuel.setDamage(3);
	Emmanuel.attack("Melenchon");
	JeanLuc.guardGate();
	JeanLuc.attack("Macron");
	Emmanuel.takeDamage(4);
	JeanLuc.beRepaired(2);
	JeanLuc.takeDamage(8);
	JeanLuc.guardGate();
	Christine.highFivesGuys();
	Christine.takeDamage(999999);
	return (0);
}


/*___________Not enough energyPoints__________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");

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
// 	return (0);
// }

/*_____________________Dead___________________*/

// int main(void)
// {
// 	ClapTrap	Player("Macron");

// 	Player.setDamage(3);
// 	Player.attack("Melenchon");
// 	Player.attack("Melenchon");
// 	Player.takeDamage(4);
// 	Player.beRepaired(2);
// 	Player.takeDamage(8);
// 	Player.takeDamage(8);
// 	Player.beRepaired(2);
// 	Player.attack("Melenchon");
// 	return (0);
// }