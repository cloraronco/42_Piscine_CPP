/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:52:48 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:37:05 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _gun(weapon) {}

HumanA::~HumanA(void) {}


void	HumanA::attack(void) {

	std::cout << _name << " attacks with their " << _gun.getType() << std::endl;
}