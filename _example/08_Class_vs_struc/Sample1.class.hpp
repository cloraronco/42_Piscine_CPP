/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:17:10 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 11:17:29 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H


struct Sample1 {

	int			foo;

	Sample1(void);
	~Sample1(void);

	void	bar(void) const;
	
};



#endif