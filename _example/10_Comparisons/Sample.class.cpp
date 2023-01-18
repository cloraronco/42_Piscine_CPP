/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:29:42 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 12:16:38 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v) {

	std::cout << "Constructor called" << std::endl;

	return;
}


Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}


int		Sample::getFoo(void) const {

	return this->_foo;
}


int	Sample::compare(Sample *other) const{

	if (this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	
	return 0;
}