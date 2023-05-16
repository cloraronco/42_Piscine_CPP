#pragma once

#include "Form.hpp"
#include <fstream>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& obj);

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};