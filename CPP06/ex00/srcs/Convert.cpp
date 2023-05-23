#include "../includes/Convert.hpp"


/*___________________________CONSTRUCTORS/ DESTRUCTOR____________________________*/

Convert::Convert(void): c(0), i(0), d(0), f(0), _isWrong(false), _type(INVALID), _def("")
{
	std::cout << GREY << "Convert default constructor called" << RESET << std::endl;
}

Convert::Convert(const Convert &convert): c(convert.c),
										i(convert.i),
										d(convert.d),
										f(convert.f),
										_isWrong(convert._isWrong),
										_type(convert._type),
										_def(convert._def)
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
	// if (&cpy)
	// 	return *this;
	i = cpy.i;
	d = cpy.d;
	f = cpy.f;
	c = cpy.c;
	_isWrong = cpy._isWrong;
	_type = cpy._type;
	_def = cpy._def;
	return (*this);
}


/*________________________________MEMBERS FONCTIONS________________________________*/

void	Convert::detect_type(char *arg)
{
	int i = 0;
	int has_dot = 0;
	int has_f = 0;
	int has_letter = 0;
	int has_num = 0;
	int has_neg = 0;
	long defValue = std::strtol(_def.c_str(), NULL, 10);
	setDef(std::string(arg));

	if (isLiteral(_def) == true)
	{
		setType(PSEUDOLIT);
		return;
	}
	while(arg[i])
	{
		if (arg[i] == '-' && i == 0)
			has_neg = 1;
		else if (std::isdigit(arg[i]))
			has_num = 1;
		else if (arg[i] == '.')
			has_dot = 1;
		else if (arg[i] == 'f' && i == (int)std::strlen(arg))
			has_f = 1;
		if (std::isalpha(arg[i]))
			has_letter = 1;
		i++;
	}
	if (i == 1)
	{
		setType(CHAR);
		c = atoi(_def.c_str());
	}
	else if (has_num == 1 && has_dot == 1 && has_f == 1)
	{
		setType(FLOAT);
		// f = std::stof(_def);
		// f = static_cast<float>(_def);
	}
	else if (has_num == 1 && has_dot == 1 && has_f == 0)
	{
		setType(DOUBLE);
		// d = std::stod(_def);
	}
	else if (has_num == 1 && has_dot == 0 && has_f == 0 && has_letter == 0)
	{
		setType(INT);
		// if (std::stol(_def) >= INT_MIN && std::stol(_def) <= INT_MAX) {
		// if (_def.c_str() >= INT_MIN.c_str() && _def.c_str() <= INT_MAX.c_str())
		if (defValue >= INT_MIN && defValue <= INT_MAX)
		{
			// i = std::stoi(_def);
			c = i;
		}
		else
			_isWrong = true;
	}
	else
		setType(INVALID);
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

void Convert::getChar() const
{
	std::cout << "char: ";
	if (_type == PSEUDOLIT)
		std::cout << "impossible" << std::endl;
	else if (c >= 32 && c <= 126)
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void Convert::getInt() const
{
	std::cout << "int: ";
	if (_type == PSEUDOLIT)
		std::cout << "impossible" << std::endl;
}

void Convert::getDouble() const
{
	std::cout << "double: ";
	if (_type == PSEUDOLIT)
		std::cout << "nan" << std::endl;
}

void Convert::getFloat() const
{
	std::cout << "float: ";
	if (_type == PSEUDOLIT)
		std::cout << "nanf" << std::endl;
}

int Convert::getType() const
{
	return _type;
}

void Convert::setType(int type)
{
	Convert::_type = type;
}

const std::string &Convert::getDef() const {
	return _def;
}

void Convert::setDef(const std::string &def) {
	_def = def;
}

void Convert::print_data() {
	getChar();
	getInt();
	getDouble();
	getFloat();
}

bool isLiteral(std::string str)
{
	if (str == "nan"|| str == "nanf" || str == "+inff" || str == "-inff"
		|| str == "-inf" || str == "+inf")
		return true;
	return false;
}

std::string convertLiteralToDouble(std::string str)
{
	if (str == "nanf")
		return "nan";
	if (str == "+inff")
		return "+inf";
	if (str == "-inff")
		return "-inf";
	return str;
}