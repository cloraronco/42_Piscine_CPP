/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:21:43 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &Weapon);
	~HumanA(void);

	void	attack(void);

private:

	std::string _name;
	Weapon&		_gun;

};