#include "../includes/Bureaucrat.hpp"


/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Bureaucrat::Bureaucrat(void): _name("Unknown")
{
	std::cout << GREY << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << GREY << "Bureaucrat name constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	*this = cpy;
	std::cout << GREY << "Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << GREY << "Bureaucrat destructor called" << RESET << std::endl;
}


/*___________________________ OVERLOADING OPERATORS________________________________*/

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	_grade = cpy._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (os);
}


/*____________________________INCREMENT/ DECREMENT_________________________________*/

Bureaucrat	Bureaucrat::operator++(int)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	Bureaucrat	cpy = *this;
	_grade--;
	return (cpy);
}

Bureaucrat	Bureaucrat::operator--(int)
{
	if (_grade >= 150)
		throw GradeTooHighException();
	Bureaucrat	cpy = *this;
	_grade++;
	return (cpy);
}


/*__________________________________ACCESSORS______________________________________*/

std::string	Bureaucrat::getName() const
{
	return(_name);
}

int			Bureaucrat::getGrade() const
{
	return(_grade);
}


/*________________________________MEMBERS FONCTIONS________________________________*/

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}