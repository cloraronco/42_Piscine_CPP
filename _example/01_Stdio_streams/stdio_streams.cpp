/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_streams.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:41:16 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 14:02:41 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main(void)
{
	char	buff[512];

	std::cout << "Hello world !" << std::endl;

	std::cout << "Input a word : ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;

	return (0);
}