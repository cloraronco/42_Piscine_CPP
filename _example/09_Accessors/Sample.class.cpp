/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:29:42 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 11:59:42 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return;
}


Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}


int		Sample::getFoo(void) const {

	return this->_foo;
}


void	Sample::setFoo(int v) {

	if (v >=0)
		this->_foo = v;
	
	return;
}