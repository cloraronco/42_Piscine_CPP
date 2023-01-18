/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:49:47 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 11:26:05 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample1.class.hpp"

Sample1::Sample1(void) {

	std::cout << "Constructor called" << std::endl;
	return;
}


Sample1::~Sample1(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample1::bar(void) const {

	return;
}