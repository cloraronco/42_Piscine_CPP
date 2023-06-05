#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base	*generate(void)
{
	Base	*base;
	int randNum = (rand() % 3) + 1;

	if (randNum == 1)
		base = new A();
	if (randNum == 2)
		base = new B();
	if (randNum == 3)
		base = new C();
	return (base);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << "The type of base is A." << RESET << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << GREEN  << "The type of base is B." << RESET  << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << GREEN  << "The type of base is C." << RESET  << std::endl;
}

void	identify(Base &p)
{
	Base	&x = p;

	try{
		x = dynamic_cast<A&>(p);
		std::cout << GREEN  << "Base is type A." << RESET  << std::endl;
	}
	catch (std::bad_cast &e){
		std::cout << RED  << "Base is not type A." << RESET  << std::endl;
	}

	try{
		x = dynamic_cast<B&>(p);
		std::cout << GREEN  << "Base is type B." << RESET  << std::endl;
	}
	catch (std::bad_cast &e){
		std::cout << RED  << "Base is not type B." << RESET  << std::endl;
	}

	try{
		x = dynamic_cast<C&>(p);
		std::cout << GREEN  << "Base is type C." << RESET  << std::endl;
	}
	catch (std::bad_cast &e){
		std::cout << RED  << "Base is not type C." << RESET  << std::endl;
	}
}

int main(void)
{
	Base *base;
	srand(time(0));

	std::cout << GREY << "Generate a random type..." << std::endl;
	base = generate();
	std::cout << "Type identification..." << RESET << std::endl;
	identify(base);
	identify(*base);

	delete base;

	return (0);
}