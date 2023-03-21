#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
		/* invalid new-expression of abstract class type */

	Animal* test;
	test = new Animal;


	std::cout << std::endl << std::endl << WHITE_B << "	Test ex00" << RESET << std::endl << std::endl;
	{
		/*   Example 1   */

		std::cout << std::endl << WHITE_B << "Example 1 : Animal" << RESET << std::endl << std::endl;

		Animal* j = new Dog();
		Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		std::cout << j->getType() << " " << std::endl;
		j->makeSound();


		delete j;
		delete i;


		/*   Example 2   */

		std::cout << std::endl << WHITE_B << "Example 2 : Wrong Animal" << RESET << std::endl << std::endl;

		WrongAnimal* fakeAnimalCat = new WrongCat();
		WrongCat* fakeCat = new WrongCat();

		std::cout << fakeAnimalCat->getType() << " " << std::endl;
		fakeAnimalCat->makeSound();

		std::cout << fakeCat->getType() << " " << std::endl;
		fakeCat->makeSound();

		delete fakeAnimalCat;
		delete fakeCat;
	}

	std::cout << std::endl << std::endl << WHITE_B << "	Test ex02 : Half/Half Animal Array" << RESET << std::endl << std::endl;
	{
		/*   Example 3   */

		std::cout << std::endl << WHITE_B << "Example 3 : Name constructor" << RESET << std::endl << std::endl;
		Animal *animals[4];
		animals[0] = new Dog("Carl");
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		std::cout << std::endl << std::endl;
		animals[0]->makeSound();
		animals[1]->makeSound();
		animals[2]->makeSound();
		animals[3]->makeSound();
		std::cout << std::endl << std::endl ;
		for (int i = 0; i < 4; i++){
			delete animals[i];
		}
	}


	{
		/*   Example 4   */

		std::cout << std::endl << WHITE_B << "Example 4 : Default constructor" << RESET << std::endl << std::endl;
		int nb = 5;
		Animal *animals[nb];
		for (int i = 0; i < nb; i++){
			if (i % 2 == 0)
			{
				std::cout << PINK << i + 1 << RESET << std::endl;
				animals[i] = new Dog();
			}
			else
			{
				std::cout << MAGENTA << i + 1 << RESET << std::endl;
				animals[i] = new Cat();
			}
		}

		std::cout << std::endl << std::endl;
		for (int i = 0; i < nb; i++){
			animals[i]->makeSound();
		}
		std::cout << std::endl << std::endl ;
		for (int i = 0; i < nb; i++){
			delete animals[i];
		}
	}

	/*               DEEP COPY                 */

	std::cout << std::endl << std::endl ;
	std::cout << std::endl << WHITE_B << "	Deep copy" << RESET << std::endl << std::endl;
	{
		Dog* dogs[2];
		Cat* cats[2];
		dogs[0] = new Dog();
		dogs[1] = new Dog(*dogs[0]);
		cats[0] = new Cat();
		cats[1] = new Cat(*cats[0]);

		std::cout << std::endl;

		std::cout << "dogs[0] idea address: " << &(dogs[0]->getBrain()._ideas[0]) << std::endl;
		std::cout << "dogs[1] idea address: " << &(dogs[1]->getBrain()._ideas[0]) << std::endl;
		std::cout << "cats[0] idea address: " << &(cats[0]->getBrain()._ideas[0]) << std::endl;
		std::cout << "cats[1] idea address: " << &(cats[1]->getBrain()._ideas[0]) << std::endl;

		std::cout << std::endl;

		delete dogs[0];
		delete dogs[1];
		delete cats[0];
		delete cats[1];
	}
	return (0);
}