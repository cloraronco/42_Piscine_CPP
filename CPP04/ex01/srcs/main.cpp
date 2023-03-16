#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();

// 	std::cout << j->getType() << " " << std::endl;
// 	j->makeSound();

// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;

// 	const WrongAnimal* fakeAnimalCat = new WrongCat();
// 	const WrongCat* fakeCat = new WrongCat();

// 	std::cout << fakeAnimalCat->getType() << " " << std::endl;
// 	fakeAnimalCat->makeSound();

// 	std::cout << fakeCat->getType() << " " << std::endl;
// 	fakeCat->makeSound();

// 	delete fakeAnimalCat;
// 	delete fakeCat;

// 	return 0;
// }

int main()
{
std::cout << std::endl << "Half/Half Animal Array" << std::endl;
	Animal *animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	std::cout << std::endl << std::endl ;
	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();
	animals[3]->makeSound();
	std::cout << std::endl << std::endl ;
	for (int i = 0; i < 4; i++){
		delete animals[i];
	}
	
}