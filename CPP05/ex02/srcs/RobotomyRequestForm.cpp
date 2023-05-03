#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): _target("Unknown")
{
	std::cout << GREY << "RobotomyRequestForm default constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target)
{
	_target = target;
	std::cout << GREY << "RobotomyRequestForm name constructor called" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
{
	*this = cpy;
	std::cout << GREY << "RobotomyRequestForm copy constructor called" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << GREY << "RobotomyRequestForm destructor called" << RESET << std::endl;
}




RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	_target = cpy._target;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, RobotomyRequestForm const& obj)
{
	os << obj.getName() << ", RobotomyRequestForm grade " << obj.getGrade() << "." << std::endl;
	return (os);
}



const char* RobotomyRequestForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

// void		RobotomyRequestForm::signForm(Form& form)
// {
// 	try
// 	{
// 		form.beSigned(*this);
// 		if (form.getSigned())
// 			std::cout << _name << " signed " << form.getName() << "." << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << RED << _name << " couldn’t sign " << form.getName() << " because " << e.what() << RESET << std::endl;
// 	}
	
// }