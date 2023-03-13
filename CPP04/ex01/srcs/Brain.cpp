#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	*this = cpy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &cpy)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = cpy._ideas[i];
	return (*this);
}

std::string*	Brain::getBrain()
{
	return (_ideas);
}