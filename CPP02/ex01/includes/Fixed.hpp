/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:11:50 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/26 11:17:38 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

private:

	int					_n;
	int static const	_bits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &cpy);
