/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:18:50 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 10:51:05 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {

	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	
	// L'adresse de la string en mémoire.
	std::cout << &str << std::endl;


	// L'adresse stockée dans stringPTR
	std::cout << stringPTR << std::endl;


	// L’adresse stockée dans stringREF.
	std::cout << &stringREF << std::endl;


	// La valeur de la string.	-	La valeur pointée par stringPTR.	-	La valeur pointée par stringREF.
	std::cout << str << " - " << *stringPTR << " - " << stringREF << std::endl;

}