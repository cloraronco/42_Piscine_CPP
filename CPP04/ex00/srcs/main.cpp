#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << std::endl << std::endl << WHITE_B << "	Test ex00" << RESET << std::endl << std::endl;
	{
		/*   Example 1   */

		std::cout << std::endl << WHITE_B << "Example 1 : Animal" << RESET << std::endl << std::endl;


		Animal* meta = new Animal();
		Animal* j = new Dog();
		Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		std::cout << j->getType() << " " << std::endl;
		j->makeSound();

		meta->makeSound();

		delete meta;
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
	return 0;
}
