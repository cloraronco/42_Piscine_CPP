/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:06:43 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:37:28 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {}

Weapon::~Weapon(void) {}


std::string	Weapon::getType() const {

	return (_type);
}

void	Weapon::setType(std::string type) {

	_type = type;
}