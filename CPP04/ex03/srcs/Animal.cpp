#include "../includes/AMateria.hpp"

AMateria::AMateria(void): _type("AMateria"){
	std::cout << GREY << "AMateria constructor called" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &cpy){
	std::cout << GREY << "AMateria copy constructor called" << RESET << std::endl;
	*this = cpy;
}

AMateria::~AMateria(void){
	std::cout << GREY << "AMateria destructor called" << RESET << std::endl;
}


AMateria	&AMateria::operator=(const AMateria &cpy){
	_type = cpy._type;
	return (*this);
}


std::string const	&AMateria::getType() const{
	return (_type);
}

AMateria	*AMateria::clone() const{
	std::cout << BLUE << "An AMateria is cloned." << RESET << std::endl;
}

void	AMateria::use(ICharacter& target){}
