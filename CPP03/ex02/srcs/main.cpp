#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

/*____________Not enough hitPoints___________*/

int main(void)
{
	ClapTrap	Emmanuel("Macron");
	ClapTrap	Player1 = Emmanuel;

	Emmanuel.setDamage(3);
	Emmanuel.attack("Melenchon");
	Emmanuel.takeDamage(10);


	ScavTrap	JeanLuc("Melenchon");
	ScavTrap	Player2 = JeanLuc;

	JeanLuc.guardGate();
	JeanLuc.attack("Macron");
	JeanLuc.beRepaired(2);
	JeanLuc.takeDamage(102);
	JeanLuc.guardGate();

	FragTrap	Christine("Lagarde");
	FragTrap	Player3 = Christine;

	Christine.highFivesGuys();
	Christine.takeDamage(999999);

	return (0);
}


/*___________Not enough energyPoints__________*/

// int main(void)
// {
// 	FragTrap	Christine("Lagarde");
// 	FragTrap	Player3 = Christine;

// 	Player3.setDamage(3);
// 	Player3.attack("Melenchon");
// 	Player3.attack("Melenchon");
// 	Player3.takeDamage(4);
// 	Player3.beRepaired(2);
// 	for (int i = 0; i < 98; i++)
// 		Player3.attack("Melenchon");
// 	Player3.attack("Melenchon");
// 	Player3.beRepaired(2);
// 	return (0);
// }

/*_____________________Dead___________________*/

// int main(void)
// {
// 	FragTrap	Christine("Lagarde");
// 	FragTrap	Player1 = Christine;

// 	Player1.setDamage(3);
// 	Player1.attack("Melenchon");
// 	Player1.attack("Melenchon");
// 	Player1.takeDamage(70);
// 	Player1.beRepaired(20);
// 	Player1.takeDamage(50);

// 	Player1.takeDamage(1);
// 	Player1.beRepaired(2);
// 	Player1.attack("Melenchon");
// 	return (0);
// }
