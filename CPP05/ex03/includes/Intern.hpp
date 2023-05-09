#pragma once

#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& copy);
		~Intern();

		Intern&	operator=(const Intern& obj);

		Form*	ppf(std::string formName, std::string targetName);
		Form*	rrf(std::string formName, std::string targetName);
		Form*	scf(std::string formName, std::string targetName);

		Form*	makeForm(std::string formName, std::string targetName);

};