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
#include <stdio.h>

PhoneBook::PhoneBook(void) : _nb(-1) {}

PhoneBook::~PhoneBook(void) {}

std::string	GetString(const std::string& msg)
{
	std::string	string;

	while (string.length() == 0)
	{
		std::cout <<"Type the " << msg << ": ";
		getline(std::cin, string);
		if (std::cin.eof())
			exit (1);
		// if (input == "")
		// 	std::exit(1);
	}
	return (string);
}

std::string	ReplaceByPoint(std::string string)
{
	if (string.length() > 10)
		string.replace(9, string.npos, ".");
	return (string);
}

void	PhoneBook::ADD() 
{
	_nb++;
	if (_nb > 7)
		_nb = 0;
	_contact[_nb].setFirstname(GetString("First Name"));
	_contact[_nb].setLastname(GetString("Last Name"));
	_contact[_nb].setNickname(GetString("Nickname"));
	_contact[_nb].setPhoneNumber(GetString("Phone Number"));
	_contact[_nb].setDarkestSecret(GetString("Darkest Secret"));

	std::cout << ">>> New contact " << _contact[_nb].getFirstname() << " added <<<\n" << std::endl;
}


void		PhoneBook::SEARCH()
{	
	std::string	index;
	int			validIndex = 0;
	int			i = 0;

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
		<< "|" << std::setw(10) << "Last Name"
		<< "|" << std::setw(10) << "Nickname"
		<< "|" << std::endl;
	while (i < 8 && _contact[i].getFirstname().length() != 0)
	{
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << ReplaceByPoint(_contact[i].getFirstname())
			<< "|" << std::setw(10) << ReplaceByPoint(_contact[i].getLastname())
			<< "|" << std::setw(10) << ReplaceByPoint(_contact[i].getNickname())
			<< "|" << std::endl;
		i++;
	}
	while (!validIndex)
	{
		std::cout << "Please enter the contact's index to see more details:\n> ";
		getline(std::cin, index);
		if (std::cin.eof())
			std::exit(1);
		if (!isdigit(index[0]) || index == "0" || index == "9" || index.length() == 0 || index.length() > 1 || \
		_contact[atoi(index.c_str()) - 1].getFirstname().length() == 0)
			std::cout << "Wrong index." << std::endl;
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
  
