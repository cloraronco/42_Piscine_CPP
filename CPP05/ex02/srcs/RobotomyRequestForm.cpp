#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("Unknown")
{
	std::cout << GREY << "RobotomyRequestForm default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45),_target(target)
{
	_target = target;
	std::cout << GREY << "RobotomyRequestForm name constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): Form(cpy.getName(), cpy.getGradeToSign(), cpy.getGradeToExec())
{
	*this = cpy;
	std::cout << GREY << "RobotomyRequestForm copy constructor called" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << GREY << "RobotomyRequestForm destructor called" << RESET << std::endl;
}



RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	_target = obj._target;
	return (*this);
}



void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	
}