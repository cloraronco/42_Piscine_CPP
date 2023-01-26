/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:47:27 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/26 15:00:48 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class	Fixed {

public:

	Fixed(void);
	Fixed(int const cpy);
	Fixed(Fixed const& cpy);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	Fixed	&operator=(Fixed const& obj);
	Fixed	operator+(Fixed const& obj) const;
	Fixed	operator-(Fixed const& obj) const;
	Fixed	operator*(Fixed const& obj) const;

private:

	int					_n;
	int static const	_bits = 8;


};