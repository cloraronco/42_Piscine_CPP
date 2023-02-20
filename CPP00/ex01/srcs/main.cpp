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

int	main(int ac, char **av) {

	(void)av;
	PhoneBook instance;
	std::string input;
	int	nb = 0;
	// int	check = 0;

	if (ac > 1)
		return (0);
	nb = (1 + 1) % 8;
	printf("nb : %d \n", nb);
	while (1)
	{
		std::cout << "Please, type ADD or SEARCH or EXIT to continue." << std::endl;
		std::cout << ">>> My Awesome Phonebook : " << std::endl;
		getline(std::cin, input);
		if (std::cin.eof())
			std::exit(1);
		if (input == "ADD")
		{
			instance.add();
			nb++;
			if (nb > 8)
			{
				nb = 1;
				// check = 1;
			}
		}
		else if (input == "SEARCH" && (nb > 0))
			instance.showcontact();
		else if (input == "EXIT")
			break;
	}
	return (0);
}
