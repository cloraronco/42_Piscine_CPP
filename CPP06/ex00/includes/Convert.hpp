#pragma once
#include <stdlib.h>
// #include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

#define RESET "\e[0m"
#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define PINK "\e[0;35m"
#define MAGENTA "\e[0;36m"
#define WHITE "\e[0;37m"

#define CHAR 1 
#define INT 2
#define DOUBLE 3
#define FLOAT 4
#define INVALID 5
#define PSEUDOLIT 6
#define INT_MIN -2147483648
#define INT_MAX 2147483647

class Convert
{
	public:
		Convert();

		Convert(std::string &_def);
		Convert(const Convert &convert);
		~Convert(void);

		Convert	&operator=(const Convert &cpy);

		void	detect_type(char *arg);
		void	convert_data();
		void	print_data();

		void	getChar() const;
		void	getInt() const;
		void	getFloat() const;
		void	getDouble() const;
		int		getType() const;
		void	setType(int type);

		const	std::string &getDef() const;
		void	setDef(const std::string &def);

	private:
		char		c;
		int			i;
		double		d;
		float		f;
		bool		_isWrong;
		int			_type;
		std::string	_def;

};
bool		isLiteral(std::string str);
std::string	convertLiteralToDouble(std::string str);
// std::ostream	&operator<<(std::ostream& os, Convert const& obj);