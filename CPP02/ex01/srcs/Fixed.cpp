/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:14:55 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/26 11:17:08 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*_________________________________________________________________*/
/*                                                                 */
/*                    Constructor / Destructor                     */
/*_________________________________________________________________*/


Fixed::Fixed(void): _n(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed::Fixed(int const numToConvert) {
	std::cout << "Int constructor called" << std::endl;
	_n = numToConvert << _bits;
}

Fixed::Fixed(float const numToConvert) {
	std::cout << "Float constructor called" << std::endl;
	_n = roundf(numToConvert * (float) (1 << _bits));
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
}

/*_________________________________________________________________*/
/*                                                                 */
/*                           Accessors                             */
/*_________________________________________________________________*/

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw) {

	std::cout << "setRawBits member function called" << std::endl;
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
	std::cout << "Copy assignment operator called" << std::endl;
	_n = obj._n;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const& obj) {
	o << obj.toFloat();
	return (o);
}

