/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:56:06 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/17 14:26:01 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	newZombie(std::string name) {

	Zombie*	jim = new Zombie(name);
	return (jim);
}
