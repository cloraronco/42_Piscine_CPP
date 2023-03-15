#include "../includes/ScavTrap.hpp"

/*____________Not enough hitPoints___________*/

int main(void)
{
	ClapTrap	Emmanuel("Macron");
	ClapTrap	Player1 = Emmanuel;

	Player1.setDamage(3);
	Player1.attack("Melenchon");
	Player1.takeDamage(15);


	ScavTrap	JeanLuc("Melenchon");
	ScavTrap	Player2 = JeanLuc;

	Player2.guardGate();
	Player2.attack("Macron");
	Player2.beRepaired(2);
	Player2.takeDamage(105);
	Player2.guardGate();


	ClapTrap	NoName1;
	ScavTrap	NoName2;

	NoName1.takeDamage(2);
	NoName2.takeDamage(5);

	return (0);
}


/*___________Not enough energyPoints__________*/

// int main(void)
// {
// 	ScavTrap	Emmanuel("Macron");
// 	ScavTrap	Player1 = Emmanuel;

// 	Player1.setDamage(3);
// 	Player1.attack("Melenchon");
// 	Player1.attack("Melenchon");
// 	Player1.takeDamage(4);
// 	Player1.beRepaired(2);
// 	for (int i = 0; i < 48; i++)
// 		Player1.attack("Melenchon");
// 	Player1.attack("Melenchon");
// 	Player1.beRepaired(2);
// 	return (0);
// }

/*_____________________Dead___________________*/

// int main(void)
// {
// 	ScavTrap	Emmanuel("Macron");
// 	ScavTrap	Player1 = Emmanuel;

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
