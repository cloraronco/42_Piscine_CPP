#include "../includes/RobotomyRequestForm.hpp"

/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("Unknown")
{
	std::cout << GREY << "RobotomyRequestForm default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
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


/*___________________________ OVERLOADING OPERATORS________________________________*/

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	_target = obj._target;
	return (*this);
}


/*________________________________MEMBERS FONCTIONS________________________________*/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw std::logic_error(executor.getName() + " can't execute a non-signed form.\n");
	if (executor.getGrade() > getGradeToExec())
		throw std::logic_error(executor.getName() + " can't execute because grade is too low.\n");
	if ((rand() % 2) == 0)
		std::cout << " " << _target << " fully Robotomyzed!" << std::endl;
	else
		std::cout<< " Robotomy failed!" << std::endl;
}