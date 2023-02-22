/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:36:43 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/20 14:21:41 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdio.h>

int	main(void)
{
	PhoneBook	instance;
	std::string	input;
	int			nb;

	nb = 0;
	while (1)
	{
		std::cout << "Please, type ADD or SEARCH or EXIT to continue." << std::endl;
		std::cout << ">>> My Awesome Phonebook : " << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			std::exit(1);
		if (input == "ADD")
		{
			instance.ADD();
			nb++;
		}
		else if (!input.compare("SEARCH") && nb)
			instance.SEARCH();
		else if (!input.compare("EXIT"))
			break;
	}
	return (0);
}
