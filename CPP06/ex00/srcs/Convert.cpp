#include "../includes/Convert.hpp"


/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Convert::Convert(void): c(0), i(0), d(0), f(0) 
{
	std::cout << GREY << "Convert default constructor called" << RESET << std::endl;
}

Convert::Convert(const Convert &cpy): c(cpy.c),
										i(cpy.i),
										f(cpy.f),
										d(cpy.d)
{
	std::cout << GREY << "Copy constructor called" << RESET << std::endl;
}

Convert::~Convert(void)
{
	std::cout << GREY << "Convert destructor called" << RESET << std::endl;
}


/*___________________________ OVERLOADING OPERATORS________________________________*/

Convert	&Convert::operator=(const Convert &cpy)
{
	// _grade = cpy._grade;
	return (*this);
}

// std::ostream	&operator<<(std::ostream& os, Convert const& obj)
// {
// 	os << obj.getName() << ", Convert grade " << obj.getGrade() << "." << std::endl;
// 	return (os);
// }

/*________________________________MEMBERS FONCTIONS________________________________*/

void	Convert::detect_type(char *arg)
{

}

void	Convert::convert_data()
{
	switch (getType())
	{
		case CHAR:
			i = static_cast<int>(c);
			d = static_cast<double>(c);
			f = static_cast<float>(c);
			break;
		case INT:
			c = static_cast<char>(i);
			d = static_cast<double>(i);
			f = static_cast<float>(i);
			break;
		case DOUBLE:
			c = static_cast<char>(d);
			i = static_cast<int>(d);
			f = static_cast<float>(d);
			break;
		case FLOAT:
			c = static_cast<char>(f);
			i = static_cast<int>(f);
			d = static_cast<double>(f);
			break;
		default:
			break;
	}
}

int Convert::getType() const
{
	return _type;
}

void Convert::setType(int type)
{
	Convert::_type = type;
}
/*---------- CHAR TO ----------*/

// int		Convert::chartoint(char c)
// {
// 	return(static_cast<int>(c));
// }

// double	Convert::chartodouble(char c)
// {
// 	return(static_cast<double>(c));
// }

// float	Convert::chartofloat(char c)
// {
// 	return(static_cast<double>(c));
// }

/*---------- INT TO -----------*/

// char	Convert::inttochar(int i)
// {

// }

// float	Convert::inttofloat(int i)
// {

// }

// double	Convert::inttodouble(int i)
// {
	
// }

/*---------- DOUBLE TO --------*/

/*---------- FLOAT TO ---------*/
