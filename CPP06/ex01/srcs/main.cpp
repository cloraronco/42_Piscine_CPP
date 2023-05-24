#include "../includes/Serialisation.hpp"

uintptr_t	serialize(Data* ptr) {
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw){
	return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data		p1;
	uintptr_t	p2;
	Data*		p3;

	p1.x = "p1.name";

	std::cout << GREY << "p1 ptr_adress: " << GREEN << &p1 << RESET << std::endl;
	std::cout << GREY << "p1.nickname: " << YELLOW << p1.x << std::endl;
	std::cout << std::endl;

	p2 = serialize(&p1);
	std::cout << GREY << "p2 ptr_adress: " << RESET << &p2 << std::endl;
	std::cout << std::endl;

	p3 = deserialize(p2);
	std::cout << GREY << "p3 ptr_adress: " << GREEN << p3 << RESET << std::endl;
	std::cout << GREY << "p3->nickname: " << YELLOW << p3->x << std::endl;

	return (0);
}