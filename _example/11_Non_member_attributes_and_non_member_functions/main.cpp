/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:59:44 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 12:35:51 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

void	f0(void) {

	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return;
}

void	f1(void) {

	Sample instance;

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f0();

	return;
}

int		main() {

	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNbInst() << std::endl;

	return 0;
}