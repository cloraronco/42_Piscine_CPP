/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:43:37 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 09:00:51 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	void		setFirstname(std::string new_firstname);
	std::string	getFirstname() const;

	void		setLastname(std::string new_lastname);
	std::string	getLastname() const;

	void		setNickname(std::string new_nickname);
	std::string	getNickname() const;

	void		setPhoneNumber(std::string new_PhoneNumber);
	std::string	getPhoneNumber() const;

	void		setDarkestSecret(std::string new_DarkestSecret);
	std::string	getDarkestSecret() const;

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
	
};