/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:26:47 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 09:25:25 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	nb = 0;
	return;
}

void	PhoneBook::add() {
 
	std::string input;

	std::cout << "FIRST NAME : ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit (1);
	this->contact[nb].setFirstname(input);

	std::cout << "LAST NAME : ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit (1);
	this->contact[nb].setLastname(input);

	std::cout << "NICK NAME : ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit (1);
	this->contact[nb].setNickname(input);

	std::cout << "PHONE NUMBER : ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit (1);
	this->contact[nb].setPhoneNumber(input);

	std::cout << "DARKEST SECRET : ";
	getline(std::cin, input);
	if (std::cin.eof())
		exit (1);
	this->contact[nb].setDarkestSecret(input);

	std::cout << "\nNew contact " << this->contact[nb].getFirstname() << " added !\n" << std::endl;
	nb = (nb + 1) % 8;
}


std::string	ReplaceByPoint(std::string string)
{
	if (string.length() > 9)
		string.replace(9, string.npos, ".");
	return (string);
}

void	PhoneBook::showcontact(){
	
	std::string	index;
	int			validIndex = 0;

	// setw(10) = sets the width to 10 characters
	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
		<< "|" << std::setw(10) << "Last Name"
		<< "|" << std::setw(10) << "Nickname"
		<< "|" << std::endl;
	for (int i = 0; i < this->nb; i++)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10) << ReplaceByPoint(this->contact[i].getFirstname())
			<< "|" << std::setw(10) << ReplaceByPoint(this->contact[i].getLastname())
			<< "|" << std::setw(10) << ReplaceByPoint(this->contact[i].getNickname())
			<< "|" << std::endl;
	}
	while (!validIndex)
	{
		std::cout << "Please enter the contact's index to see more details:\n> ";
		getline(std::cin, index);
		if (std::cin.eof())
			exit (1);
		if (index.length() < 0 || index.length() > 1 || \
		this->contact[atoi(index.c_str())].getFirstname().length() == 0)
			std::cout << "Wrong index" << std::endl;
		else
			validIndex = 1;
	}
	std::cout << std::endl << "First Name: " << contact[atoi(index.c_str())].getFirstname() << std::endl;
	std::cout << "Last Name: " << contact[atoi(index.c_str())].getLastname() << std::endl;
	std::cout << "NickName: " << contact[atoi(index.c_str())].getNickname() << std::endl;
	std::cout << "Phone Number: " << contact[atoi(index.c_str())].getPhoneNumber() << std::endl << std::endl;
	std::cout << "Darkest Secret: "<< contact[atoi(index.c_str())].getDarkestSecret() << std::endl;

}


PhoneBook::~PhoneBook(void) {

	return;
}
