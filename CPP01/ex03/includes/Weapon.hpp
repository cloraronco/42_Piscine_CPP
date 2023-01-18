/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:51:29 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/18 14:37:29 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Weapon {

public:

	// Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string	getType() const;
	void		setType(std::string type);

private:

	std::string _type;

};