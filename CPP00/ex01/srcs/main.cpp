/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:36:43 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 09:25:33 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main() {

	PhoneBook instance;
	std::string input;
	int	nb = 0;

	std::cout << "My Awesome PhoneBook : ";
	while (1)
	{
		getline(std::cin, input);
		if (input == "ADD")
		{
			instance.add();
			nb++;
		}
		else if (input == "SEARCH" && nb > 0)
			instance.showcontact();
		else if (input == "EXIT")
			break;
		std::cout << "My Awesome Phonebook : " << std::endl;
	}
	return (0);
}