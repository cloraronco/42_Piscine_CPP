#include "../includes/Fixed.hpp"

/*_________________________________________________________________*/
/*                                                                 */
/*                    Constructor / Destructor                     */
/*_________________________________________________________________*/


Fixed::Fixed(void): _n(0) {}

Fixed::Fixed(Fixed const& cpy) {
	*this = cpy;
	return ;
}

Fixed::Fixed(int const numToConvert) {
	_n = numToConvert << _bits;
}

Fixed::Fixed(float const numToConvert) {
	_n = roundf(numToConvert * (float) (1 << _bits));
}

Fixed::~Fixed(void) {}


/*_________________________________________________________________*/
/*                                                                 */
/*                           Accessors                             */
/*_________________________________________________________________*/

int		Fixed::getRawBits(void) const {
	return _n;
}

void	Fixed::setRawBits(int const raw) {
	_n = raw;
}

/*_________________________________________________________________*/
/*                                                                 */
/*                        Member Functions                         */
/*_________________________________________________________________*/

float	Fixed::toFloat(void) const
{
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

Fixed &Fixed::operator=(Fixed const& obj)
{
	_n = obj._n;
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Fixed const& obj)
{
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
