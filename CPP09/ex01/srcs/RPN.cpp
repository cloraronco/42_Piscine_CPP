#include "../includes/RPN.hpp"

/*------------ Constructor / Destructor --------------*/

RPN::RPN() {}

RPN::RPN(std::string str)
{
	this->_str = str;

	std::string::iterator it = str.begin();
	while (it != str.end())
	{
		if (*it != ' ')
		{
			if (!isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/')
			{
				std::cerr << RED << "Error" << RESET << std::endl;
				std::exit(1);
			}
		}
		it++;
	}
}

RPN::RPN(RPN const &cpy) {
	*this = cpy;
}

RPN::~RPN() {}


/*-------------- Overloading operator ----------------*/

RPN	&RPN::operator=(RPN const &rpn)
{
	if (this != &rpn)
	{
		this->_values = rpn._values;
	}
	return (*this);
}


/*---------------- Member functions ------------------*/

void	RPN::calculate()
{
	std::string::iterator it = this->_str.begin();
	while (it != this->_str.end())
	{
		if (*it == ' ')
		{
			it++;
			continue;
		}
		if (isdigit(*it))
		{
			this->_values.push(*it - '0');
			it++;
			continue;
		}
		if (*it == '+' || *it == '-' || *it == '*' || *it == '/')
		{
			if (this->_values.size() < 2)
			{
				std::cerr << RED << "Error" << RESET << std::endl;
				return;
			}
			int a = this->_values.top();
			this->_values.pop();
			int b = this->_values.top();
			this->_values.pop();
			if (*it == '+')
				this->_values.push(b + a);
			if (*it == '-')
				this->_values.push(b - a);
			if (*it == '*')
				this->_values.push(b * a);
			if (*it == '/')
			{
				if (a == 0)
				{
					std::cerr << RED << "Error" << RESET << std::endl;
					return;
				}
				this->_values.push(b / a);
			}
			it++;
			continue;
		}
	}
	if (this->_values.size() != 1)
	{
		std::cerr << RED << "Error" << RESET << std::endl;
		return;
	}
	std::cout << this->_values.top() << std::endl;
}