/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:56:11 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/17 14:36:21 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void) {

	Zombie*	Hell;

	Hell = newZombie("Jim");
	// Hell->announce();
	randomChump("Bob");
	delete (Hell);
	return (0);
}