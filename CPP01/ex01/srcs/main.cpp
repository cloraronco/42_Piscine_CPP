/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:56:11 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 10:16:18 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void) {

	Zombie*	bigHell;
	Zombie* smallHell;
	int	nb_bigHell = 6;
	int	nb_smallHell = 3;

	bigHell = zombieHorde(nb_bigHell, "Member of bigHell");
	smallHell = zombieHorde(nb_smallHell, "Member of smallHell");

	for (int i = 0; i < nb_bigHell; i++)
		bigHell[i].announce();
	for (int j = 0; j < nb_smallHell; j++)
		smallHell[j].announce();
	delete []bigHell;
	delete []smallHell;
}