/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:26:47 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/20 14:41:36 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	nb = 0;
	return;
}

std::string	PhoneBook::add() {
 
	std::string input;

	std::cout << "FIRST NAME : ";
	std::getline(std::cin, input);
	if (input == "")
		std::exit(1);
	this->_contact[nb].setFirstname(input);

	std::cout << "LAST NAME : ";
	getline(std::cin, input);
	if (input == "")
		std::exit(1);
	this->_contact[nb].setLastname(input);

	std::cout << "NICK NAME : ";
	getline(std::cin, input);
	if (input == "")
		std::exit(1);
	this->_contact[nb].setNickname(input);

	std::cout << "PHONE NUMBER : ";
	getline(std::cin, input);
	if (input == "")
		std::exit(1);
	this->_contact[nb].setPhoneNumber(input);

	std::cout << "DARKEST SECRET : ";
	getline(std::cin, input);
	if (input == "")
		std::exit(1);
	this->_contact[nb].setDarkestSecret(input);

	std::cout << ">>> New contact " << this->_contact[nb].getFirstname() << " added <<<\n" << std::endl;
	nb = (nb + 1) % 8;

	return (input);
}


std::string	ReplaceByPoint(std::string string)
{
	if (string.length() > 9)
		string.replace(9, string.npos, ".");
	return (string);
}

void		PhoneBook::showcontact(){
	
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
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << ReplaceByPoint(this->_contact[i].getFirstname())
			<< "|" << std::setw(10) << ReplaceByPoint(this->_contact[i].getLastname())
			<< "|" << std::setw(10) << ReplaceByPoint(this->_contact[i].getNickname())
			<< "|" << std::endl;
	}
	while (!validIndex)
	{
		std::cout << "Please enter the contact's index to see more details:\n> ";
		getline(std::cin, index);
		if (std::cin.eof())
			std::exit(1);
		if (!isdigit(index[0]) || index == "0" || index.length() == 0 || index.length() > 1 || \
		this->_contact[atoi(index.c_str()) - 1].getFirstname().length() == 0)
			std::cout << "Wrong index" << std::endl;
		else
			validIndex = 1;
	}
	std::cout << std::endl << "First Name: " << _contact[atoi(index.c_str()) - 1].getFirstname() << std::endl;
	std::cout << "Last Name: " << _contact[atoi(index.c_str()) - 1].getLastname() << std::endl;
	std::cout << "NickName: " << _contact[atoi(index.c_str()) - 1].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contact[atoi(index.c_str()) - 1].getPhoneNumber() << std::endl << std::endl;
	std::cout << "Darkest Secret: "<< _contact[atoi(index.c_str()) - 1].getDarkestSecret() << std::endl;
	std::cout << "_______________________________________________" << std::endl << std::endl;
} 
  
PhoneBook::~PhoneBook(void) {

	return;
}
