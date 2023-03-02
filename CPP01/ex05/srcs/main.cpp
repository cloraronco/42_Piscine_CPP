/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:54:12 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/25 13:18:28 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main() {

	Harl	Karen;

	Karen.complain("debug");
	Karen.complain("info");
	Karen.complain("warning");
	Karen.complain("error");
	return (0);
}