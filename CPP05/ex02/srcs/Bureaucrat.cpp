#include "../includes/Bureaucrat.hpp"

/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Bureaucrat::Bureaucrat(void): _name("Unknown"), _grade(150)
{
	std::cout << GREY << "Bureaucrat default constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << GREY << "Bureaucrat name constructor called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy): _name(cpy._name), _grade(cpy._grade)
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

std::ostream &operator<<(std::ostream& os, Bureaucrat const& obj)
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


/*__________________________________ACCESSORS______________________________________*/

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
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

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		if (form.getSigned())
			std::cout << GREEN << _name << " signed " << form.getName() << "." << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << _name << " couldn’t sign " << form.getName() << " because " << e.what() << RESET << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}