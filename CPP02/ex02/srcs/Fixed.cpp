/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:46:51 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/26 15:01:26 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void): _n(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const cpy) {

	std::cout << "Constructor called wih value" << std::endl;
	*this = cpy;
	return;
}

Fixed::Fixed(Fixed const& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;

	return ;
}

Fixed &Fixed::operator=(Fixed const& cpy) {

	std::cout << "Copy assignment operator called" << std::endl;
	_n = cpy.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const& cpy) const {

	std::cout << "Addition operator called" << this->_n;
	std::cout << "and" << cpy.getRawBits() << std::endl;

	return (Fixed(this->_n + cpy.getRawBits()));
}

Fixed Fixed::operator-(Fixed const& cpy) const {

	std::cout << "Subtraction operator called" << this->_n;
	std::cout << "and" << cpy.getRawBits() << std::endl;

	return (Fixed(this->_n - cpy.getRawBits()));
}

Fixed Fixed::operator*(Fixed const& cpy) const {

	std::cout << "Multiplication operator called" << this->_n;
	std::cout << "and" << cpy.getRawBits() << std::endl;

	return (Fixed(this->_n * cpy.getRawBits()));
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}



Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}
