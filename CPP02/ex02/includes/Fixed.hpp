#pragma once
#include <iostream>
#include <cmath>

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const& cpy);
	Fixed(int const numToConvert);
	Fixed(float const numToConvert);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat( void ) const;
	int		toInt( void ) const;	

	Fixed	&operator=(Fixed const& obj);

	Fixed	operator+(Fixed const& obj);
	Fixed	operator-(Fixed const& obj);
	Fixed	operator*(Fixed const& obj);
	Fixed	operator/(Fixed const& obj);
	bool	operator>(Fixed const& obj);
	bool	operator<(Fixed const& obj);
	bool	operator>=(Fixed const& obj);
	bool	operator<=(Fixed const& obj);
	bool	operator==(Fixed const& obj);
	bool	operator!=(Fixed const& obj);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed&		min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	min(Fixed const& obj1, Fixed const& obj2);
	static Fixed&		max(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(Fixed const& obj1, Fixed const& obj2);

private:

	int					_n;
	int static const	_bits = 8;

  
};

std::ostream	&operator<<(std::ostream &o, Fixed const &cpy);
