/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/17 15:04:56 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);
	void	setName(std::string name);

private:

	std::string _name;

};

Zombie*	zombieHorde(int N, std::string name);