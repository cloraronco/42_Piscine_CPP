/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/17 14:37:35 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void);

private:

	std::string _name;

};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);