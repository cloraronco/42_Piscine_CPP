/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:49:47 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 11:25:55 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample2.class.hpp"

Sample2::Sample2(void) {

	std::cout << "Constructor called" << std::endl;
	return;
}


Sample2::~Sample2(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample2::bar(void) const {

	return;
}