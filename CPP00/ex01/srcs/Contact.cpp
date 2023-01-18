/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:46:38 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 09:25:09 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {

	return;
}


void	Contact::setFirstname(std::string new_firstname){
	this->_first_name = new_firstname;
}

void	Contact::setLastname(std::string new_lastname){
	this->_last_name = new_lastname;
}

void	Contact::setNickname(std::string new_nickname){
	this->_nickname = new_nickname;
}

void	Contact::setPhoneNumber(std::string new_phonenumber){
	this->_phone_number = new_phonenumber;
}

void	Contact::setDarkestSecret(std::string new_darkestsecret){
	this->_darkest_secret = new_darkestsecret;
}


std::string		Contact::getFirstname() const{
	return (this->_first_name);
}

std::string		Contact::getLastname() const{
	return (this->_last_name);
}

std::string		Contact::getNickname() const{
	return (this->_nickname);
}

std::string		Contact::getPhoneNumber() const{
	return (this->_phone_number);
}

std::string		Contact::getDarkestSecret() const{
	return (this->_darkest_secret);
}