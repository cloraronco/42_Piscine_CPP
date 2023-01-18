/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:52:48 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/17 15:05:34 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void){

	return;
}

Zombie::Zombie(std::string name): _name(name) {

	return;
}

Zombie::~Zombie(void) {

	std::cout << _name << " is dead" << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce(void) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}