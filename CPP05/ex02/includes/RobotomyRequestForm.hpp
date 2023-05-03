#pragma once

#include "Form.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj);

		void	execute(Bureaucrat const & executor) const;

	private:
		std::string	_target;
};