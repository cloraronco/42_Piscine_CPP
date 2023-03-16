#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();

	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* fakeAnimalCat = new WrongCat();
	const WrongCat* fakeCat = new WrongCat();

	std::cout << fakeAnimalCat->getType() << " " << std::endl;
	fakeAnimalCat->makeSound();

	std::cout << fakeCat->getType() << " " << std::endl;
	fakeCat->makeSound();

	delete fakeAnimalCat;
	delete fakeCat;

	return 0;
}
