/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:22:17 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/20 14:14:33 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <ctype.h>
#include "Contact.hpp"

class PhoneBook {

public:


	PhoneBook(void);
	~PhoneBook(void);

	void	ADD();
	void	SEARCH();

private:

	Contact	_contact[8];
	int		_nb;

};