/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:16:37 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	HumanB(std::string name, Weapon* weapon);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:

	std::string _name;
	Weapon*		_gun;

};