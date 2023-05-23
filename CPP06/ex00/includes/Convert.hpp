#pragma once
#include <string>
#include <iostream>

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

		int		chartoint(char c);
		double	chartodouble(char c);
		float	chartofloat(char c);

		int getType() const;
		void setType(int type);

	private:
		char	c;
		int		i;
		float	f;
		double	d;
		int		_type;
		std::string	_def;

};

// std::ostream	&operator<<(std::ostream& os, Convert const& obj);