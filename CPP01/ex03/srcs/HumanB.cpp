/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:56:06 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:34:40 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}

HumanB::HumanB(std::string name, Weapon* weapon): _name(name), _gun(weapon) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) {

	if (_gun != NULL)
		std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
	else
		std::cout << _name << " attacks with his head" << std::endl;

}

void	HumanB::setWeapon(Weapon &weapon) {

	_gun = &weapon;
}
