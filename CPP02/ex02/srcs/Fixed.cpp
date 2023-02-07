/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:46:51 by clora-ro          #+#    #+#             */
/*   Updated: 2023/02/06 15:17:32 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*_________________________________________________________________*/
/*                                                                 */
/*                    Constructor / Destructor                     */
/*_________________________________________________________________*/


Fixed::Fixed(void): _n(0) {

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed::Fixed(int const numToConvert) {
	// std::cout << "Int constructor called" << std::endl;
	_n = numToConvert << _bits;
}

Fixed::Fixed(float const numToConvert) {
	// std::cout << "Float constructor called" << std::endl;
	_n = roundf(numToConvert * (float) (1 << _bits));
}
Fixed::~Fixed(void) {

	// std::cout << "Destructor called" << std::endl;
}


/*_________________________________________________________________*/
/*                                                                 */
/*                           Accessors                             */
/*_________________________________________________________________*/

int		Fixed::getRawBits(void) const {

	// std::cout << "getRawBits member function called" << std::endl;
	return _n;
}

void	Fixed::setRawBits(int const raw) {

	// std::cout << "setRawBits member function called" << std::endl;
	_n = raw;
}

/*_________________________________________________________________*/
/*                                                                 */
/*                        Member Functions                         */
/*_________________________________________________________________*/

float	Fixed::toFloat(void) const {
	return (_n / (float) (1 << this->_bits));
}

int		Fixed::toInt(void) const
{
	int	convertedFixed;

	convertedFixed = _n >> _bits;
	return (convertedFixed);
}


/*_________________________________________________________________*/
/*                                                                 */
/*                      Overlaoding Operator                       */
/*_________________________________________________________________*/

Fixed &Fixed::operator=(Fixed const& obj) {
	// std::cout << "Copy assignment operator called" << std::endl;
	_n = obj._n;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const& obj) {
	o << obj.toFloat();
	return (o);
}

/*----------------------Comparaisons Operator----------------------*/

bool	Fixed::operator>(Fixed const& obj) {
	return (_n > obj._n);
}

bool	Fixed::operator<(Fixed const& obj) {
	return (_n < obj._n);
}

bool	Fixed::operator>=(Fixed const& obj) {
	return (_n >= obj._n);
}

bool	Fixed::operator<=(Fixed const& obj) {
	return (_n <= obj._n);
}

bool	Fixed::operator==(Fixed const& obj) {
	return (_n == obj._n);
}

bool	Fixed::operator!=(Fixed const& obj) {
	return (_n != obj._n);
}


/*-----------------------Arithmetic Operator-----------------------*/

Fixed	Fixed::operator+(Fixed const& obj) {
	return (Fixed(toFloat() + obj.toFloat()));
}

Fixed	Fixed::operator-(Fixed const& obj) {
	return (Fixed(toFloat() - obj.toFloat()));
}

Fixed	Fixed::operator*(Fixed const& obj) {
	return (Fixed(toFloat() * obj.toFloat()));
}

Fixed	Fixed::operator/(Fixed const& obj) {
	return (Fixed(toFloat() / obj.toFloat()));
}


/*---------------------Incrementation Operator---------------------*/

Fixed&	Fixed::operator++(void) {
	_n++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	cpy = *this;
	_n++;
	return (cpy);
}


/*---------------------Decrementation Operator---------------------*/

Fixed&	Fixed::operator--(void) {
	_n--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	cpy = *this;
	_n--;
	return (cpy);
}


/*------------------------Min / Max Operator-----------------------*/

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 >= obj2)
		return (obj2);
	return (obj1);
}

const Fixed&	Fixed::min(Fixed const& obj1, Fixed const& obj2)
{
	if ((Fixed)obj1 >= obj2)
		return (obj2);
	return (obj1);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 <= obj2)
		return (obj2);
	return (obj1);
}

const Fixed&	Fixed::max(Fixed const& obj1, Fixed const& obj2)
{
	if ((Fixed)obj1 <= obj2)
		return (obj2);
	return (obj1);
}
