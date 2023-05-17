#include "../includes/Bureaucrat.hpp"


/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Bureaucrat::Bureaucrat(void): _name("Unknown"), _grade(150)
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

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name), _grade(cpy._grade)
{
	std::cout << GREY << "Bureaucrat copy constructor called" << RESET << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << GREY << "Bureaucrat destructor called" << RESET << std::endl;
}


/*___________________________ OVERLOADING OPERATORS________________________________*/

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	std::cerr << RED << "Can't copy constant variable." << RESET << std::endl;
	_grade = cpy._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (os);
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

void	Bureaucrat::incrementation(int i)
{
	if (i < 1)
		throw std::invalid_argument("Invalid parameter.");
	else if (_grade - i < 1)
		throw GradeTooHighException();
	_grade = _grade - i;
	std::cout << YELLOW << _name << "'s grade : +" << i << " levels !" << RESET << std::endl; 
}

void	Bureaucrat::decrementation(int i)
{
	if (i < 1)
		throw std::invalid_argument("Invalid parameter.");
	else if (_grade + i > 150)
		throw GradeTooLowException();
	_grade = _grade + i;
	std::cout << YELLOW << _name << "'s grade : -" << i << " levels !" << RESET << std::endl; 
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}