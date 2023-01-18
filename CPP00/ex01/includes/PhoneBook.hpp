/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:22:17 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 09:24:04 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {

public:

	int		nb;

	PhoneBook(void);
	~PhoneBook(void);

	void	add();
	void 	showcontact();

private:

	Contact	contact[8];

};