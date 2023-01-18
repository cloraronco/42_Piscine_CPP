/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:29:42 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 12:30:54 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return;
}


Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}


int		Sample::getNbInst(void) {

	return Sample::_nbInst;
}


int	Sample::_nbInst = 0;