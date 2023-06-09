#include <iostream>
#include <string>
#include <stack>
#include <cstring>
#include <cstdlib>

class RPN
{
private:
	std::stack<double> _values;
	std::string _str;

public:
	RPN();
	RPN(std::string str);
	RPN(RPN const &cpy);
	~RPN();

	RPN &operator=(RPN const &rpn);
	void calculate();
};