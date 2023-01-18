/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:59:44 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 12:54:13 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int		main() {

	Sample		instance;
	Sample 		*instancep = &instance;

	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo : " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo : " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}