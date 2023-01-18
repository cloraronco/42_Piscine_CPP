/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:29:42 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 12:56:06 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) : foo(0) {

	std::cout << "Constructor called" << std::endl;

	return;
}


Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;

	return;
}


void	Sample::bar(void) const {

	std::cout << "Member function bar called" << std::endl;
	return;
}