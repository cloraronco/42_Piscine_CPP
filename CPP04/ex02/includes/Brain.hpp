#pragma once
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &cpy);
		~Brain(void);
		
		Brain	&operator=(const Brain &cpy);
		std::string _ideas[100];
};
