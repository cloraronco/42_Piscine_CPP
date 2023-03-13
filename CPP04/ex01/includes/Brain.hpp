#pragma once
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &cpy);
		virtual ~Brain(void);
		
		Brain	&operator=(const Brain &cpy);
		virtual std::string*	getBrain(void);

	private:
		std::string _ideas[100];
};
