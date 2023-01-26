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

class	Fixed {

public:

	Fixed(void);
	Fixed(void);
	Fixed(void);
	Fixed(Fixed const& cpy);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	Fixed	&operator=(Fixed const& obj);

private:

	int					_n;
	int static const	_bits = 8;


};