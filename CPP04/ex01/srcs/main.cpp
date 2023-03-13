// #include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	// const WrongAnimal* fakeAnimal = new WrongAnimal();
	// const WrongCat* fakeCat = new WrongCat();

	// std::cout << fakeCat->getType() << " " << std::endl;
	// fakeCat->makeSound();

	// delete fakeAnimal;
	// delete fakeCat;

	return 0;
}
