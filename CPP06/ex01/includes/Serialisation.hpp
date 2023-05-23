#pragma once
#include <stdint.h>
#include <iostream>

typedef struct Data {
	std::string	nickName;
}Data;

class Serialisation
{
	public:
		Serialisation();

		Serialisation(std::string &_def);
		Serialisation(const Serialisation &Serialisation);
		~Serialisation(void);

		Serialisation	&operator=(const Serialisation &cpy);
		uintptr_t		serialize(Data* ptr) {
			return(reinterpret_cast<uintptr_t>(ptr));
		}
		Data*			deserialize(uintptr_t raw){
			return(reinterpret_cast<Data * )
		}

};
// std::ostream	&operator<<(std::ostream& os, Serialisation const& obj);