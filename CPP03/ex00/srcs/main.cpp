#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap	Player("Melenchon");

	Player.attack("Macron");
	Player.attack("Macron");
	Player.takeDamage(2);
	Player.takeDamage(2);
	Player.takeDamage(2);
	Player.takeDamage(2);
	Player.beRepaired(4);
	return (0);
}